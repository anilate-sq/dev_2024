# QValidate - проверка диапозонов значений

import sys
from PySide6.QtWidgets import QLineEdit, QPushButton, QWidget, QApplication, QLabel, QVBoxLayout
from PySide6.QtGui import QIntValidator



class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()
        self.line_edit = QLineEdit()
        self.line_edit.setPlaceholderText("Укажите количество билетов(максимум 4)")
        validator = QIntValidator(1, 4, self.line_edit) # создаем валидатор
        self.line_edit.setValidator(validator) # подключаем валидатор

        self.label = QLabel()
        self.btn = QPushButton("Отправить")
        
        layout = QVBoxLayout()
        layout.addWidget(self.line_edit)
        layout.addWidget(self.btn)
        layout.addWidget(self.label)

        self.setLayout(layout)
        self.btn.clicked.connect(self.btnClick)

    def btnClick(self):
        if self.line_edit.hasAcceptableInput():
            self.label.setText("указанное число мест")

        else:
            self.label.setText("принимаются значения от 1 до 4")


app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())