# QVBoxLayou - вертикальный Layout

import sys
from PySide6.QtWidgets import QPushButton, QVBoxLayout, QWidget, QApplication

class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()

        self.setWindowTitle("Выбор действия")
        self.resize(400, 200)

        # Создам несколько кнопок
        self.startButton = QPushButton("Кнопка 1")
        self.midButton = QPushButton("Кнопка 2")
        self.endButton = QPushButton("Кнопка 3")

        # Создадим QVBoxLayout
        layout = QVBoxLayout()
        layout.addWidget(self.startButton)
        layout.addWidget(self.midButton)
        layout.addWidget(self.endButton)

        self.setLayout(layout) # Добавляю созданный Layout с размещенными элементами 



app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())