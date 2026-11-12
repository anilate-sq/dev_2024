# Сигнал - фиксация действия пользователя над виджетом

import sys
from PySide6.QtWidgets import QVBoxLayout, QPushButton, QWidget, QApplication, QLabel

class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()
        self.label = QLabel("Кнопка")
        self.button = QPushButton("Нажать")

        self.button.clicked.connect(self.btnClick) # элемент.сигнал.подключение(обработчик)
        layout = QVBoxLayout()
        layout.addWidget(self.label)
        layout.addWidget(self.button)

        self.setLayout(layout)

    def btnClick(self):
        self.label.setText("Нажали кнопку")


app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())