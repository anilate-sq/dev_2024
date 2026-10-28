# QGridLayou - сетка

import sys
from PySide6.QtWidgets import QPushButton, QGridLayout, QWidget, QApplication

class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()

        self.setWindowTitle("Выбор действия")
        self.resize(400, 200)

        # Создам несколько кнопок
        self.startButton = QPushButton("Кнопка 1")
        self.midButton = QPushButton("Кнопка 2")
        self.endButton = QPushButton("Кнопка 3")

        # Создадим QGridLayout
        layout = QGridLayout()
        layout.addWidget(self.startButton, 0, 0)
        layout.addWidget(self.midButton, 0, 1)
        layout.addWidget(self.endButton, 1, 1)

        self.setLayout(layout) # Добавляю созданный Layout с размещенными элементами 



app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())