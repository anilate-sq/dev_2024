# QValidate - проверка диапозонов значений

import sys
from PySide6.QtWidgets import QLineEdit, QPushButton, QWidget, QApplication, QLabel, QVBoxLayout
from PySide6.QtGui import QIntValidator



class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()
        self.line_edit = QLineEdit()
        self.line_edit.setPlaceholderText("Укажите количество билетов(максимум 4)")
        self.name_input = QLineEdit()
        self.name_input.setPlaceholderText("Введите имя")
        validator = QIntValidator(1, 4, self.line_edit) # создаем валидатор
        self.line_edit.setValidator(validator) # подключаем валидатор

        self.label = QLabel()

        self.btn = QPushButton("Отправить")
        
        layout = QVBoxLayout()
        layout.addWidget(self.name_input)
        layout.addWidget(self.line_edit)
        layout.addWidget(self.btn)
        layout.addWidget(self.label)

        self.setLayout(layout)
        self.btn.clicked.connect(self.save)

    # проверки
    def error(self):
        # в данной функции мы можем провести проверки на ошибки
        if not self.name_input.text().strip():
            return "Введите имя"

        if not self.line_edit.hasAcceptableInput():
            return "Допустимо от 1 до 4 мест"

        return

    def refresh(self):
        message = self.error()
        self.label = message
        self.btn.setEnabled(not message)

    def save(self):
        message = self.error()
        if message:
            self.label.setText(message)
            return

        self.label.setText("Заявка принята")


app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())