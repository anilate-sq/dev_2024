# QGridLayou - сетка

import sys
from PySide6.QtWidgets import QPushButton, QVBoxLayout, QHBoxLayout, QWidget, QApplication

class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()

        self.setWindowTitle("Выбор действия")
        self.resize(400, 200)

        # Создам несколько кнопок
        self.startButton = QPushButton("Кнопка 1")
        self.midButton = QPushButton("Кнопка 2")
        self.endButton = QPushButton("Кнопка 3")
        self.addButton = QPushButton("Кнопка 4")

        # Создадим главный Layout
        mainLayout = QVBoxLayout()
        # Создадим 2 дочерних Layout
        topLayout = QHBoxLayout()
        botLayout = QHBoxLayout()

        # Добавим 2 кнопки на верхний дочерний Layout
        topLayout.addWidget(self.startButton)
        topLayout.addWidget(self.midButton)

        # Добавим 2 кнопки на нижний дочерний Layout
        botLayout.addWidget(self.endButton)
        botLayout.addWidget(self.addButton)

        # Добавим дочерние Layout на родительский
        mainLayout.addLayout(topLayout)
        mainLayout.addLayout(botLayout)
        self.setLayout(mainLayout) # Добавляю созданный Layout с размещенными элементами 



app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())