"""Учебная форма заявки на покупку техники на PySide6."""

import sys
from pathlib import Path

from PySide6.QtCore import Qt
from PySide6.QtWidgets import (
    QApplication, QComboBox, QFormLayout, QFrame, QHBoxLayout, QLabel,
    QLineEdit, QPushButton, QSpinBox, QTextEdit, QVBoxLayout, QWidget,
)


# Цены храним в словаре: название товара → цена в рублях.
PRODUCTS = {"Ноутбук": 65000, "Монитор": 18000, "Клавиатура": 3500, "Мышь": 1500}


def rubles(amount):
    return f"{amount:,} ₽".replace(",", " ")


class PurchaseWindow(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Техно • Заявка на покупку")
        self.resize(600, 740)
        self.setMinimumWidth(480)

        layout = QVBoxLayout(self)
        layout.setContentsMargins(32, 28, 32, 28)
        layout.setSpacing(12)

        brand = QLabel("ТЕХНО  /  ЗАКУПКИ")
        brand.setObjectName("brand")
        layout.addWidget(brand)

        title = QLabel("Новая заявка")
        title.setObjectName("title")
        layout.addWidget(title)

        subtitle = QLabel("Выберите технику и оставьте контактные данные.")
        subtitle.setObjectName("subtitle")
        subtitle.setWordWrap(True)
        layout.addWidget(subtitle)
        layout.addSpacing(8)

        card = QFrame()
        card.setObjectName("card")
        card_layout = QVBoxLayout(card)
        card_layout.setContentsMargins(24, 24, 24, 24)
        card_layout.setSpacing(18)

        form = QFormLayout()
        form.setSpacing(14)
        form.setLabelAlignment(Qt.AlignmentFlag.AlignLeft)
        form.setFieldGrowthPolicy(QFormLayout.FieldGrowthPolicy.AllNonFixedFieldsGrow)

        self.name = QLineEdit()
        self.name.setPlaceholderText("Иван Петров")
        self.name.setMaxLength(100)
        form.addRow("Ваше имя *", self.name)

        self.email = QLineEdit()
        self.email.setPlaceholderText("ivan@example.ru")
        self.email.setMaxLength(150)
        form.addRow("Email *", self.email)

        self.product = QComboBox()
        self.product.addItems(PRODUCTS)
        form.addRow("Техника", self.product)

        self.quantity = QSpinBox()
        self.quantity.setRange(1, 20)
        self.quantity.setSuffix(" шт.")
        form.addRow("Количество", self.quantity)

        self.comment = QTextEdit()
        self.comment.setPlaceholderText("Например: нужен ноутбук для учёбы")
        self.comment.setFixedHeight(90)
        self.comment.setAcceptRichText(False)
        form.addRow("Комментарий", self.comment)
        card_layout.addLayout(form)

        summary = QHBoxLayout()
        summary.addWidget(QLabel("Предварительная сумма"))
        self.total = QLabel()
        self.total.setObjectName("total")
        summary.addWidget(self.total, alignment=Qt.AlignmentFlag.AlignRight)
        card_layout.addLayout(summary)

        self.submit = QPushButton("Отправить заявку →")
        self.submit.setCursor(Qt.CursorShape.PointingHandCursor)
        self.submit.setMinimumHeight(46)
        card_layout.addWidget(self.submit)

        layout.addWidget(card)
        self.status = QLabel("* Обязательные поля")
        self.status.setObjectName("status")
        self.status.setWordWrap(True)
        self.status.setMinimumHeight(48)
        layout.addWidget(self.status)
        layout.addStretch()

        note = QLabel("Учебный проект • Заявка не отправляется в интернет")
        note.setObjectName("note")
        note.setWordWrap(True)
        layout.addWidget(note)

        # Сигналы виджетов вызывают обычные методы нашего класса.
        self.product.currentTextChanged.connect(self.update_total)
        self.quantity.valueChanged.connect(self.update_total)
        self.submit.clicked.connect(self.send_request)
        self.update_total()

    def update_total(self):
        amount = PRODUCTS[self.product.currentText()] * self.quantity.value()
        self.total.setText(rubles(amount))

    def send_request(self):
        name = self.name.text().strip()
        email = self.email.text().strip()
        self.status.setStyleSheet("color: #b42318;")

        if not name:
            self.status.setText("Введите ваше имя.")
            self.name.setFocus()
            return

        # Простая учебная проверка адреса, без сложных регулярных выражений.
        parts = email.split("@")
        if (len(parts) != 2 or not parts[0] or "." not in parts[1]
                or parts[1].startswith(".") or parts[1].endswith(".")
                or any(char.isspace() for char in email)):
            self.status.setText("Укажите email в формате name@example.ru.")
            self.email.setFocus()
            return

        self.status.setStyleSheet("color: #157347;")
        self.status.setText(
            f"{name}, учебная заявка принята!\n"
            f"{self.product.currentText()} — {self.quantity.value()} шт., "
            f"сумма: {self.total.text()}."
        )


if __name__ == "__main__":
    app = QApplication(sys.argv)
    app.setStyle("Fusion")
    style_path = Path(__file__).with_name("style.qss")
    app.setStyleSheet(style_path.read_text(encoding="utf-8"))
    window = PurchaseWindow()
    window.show()
    sys.exit(app.exec())
