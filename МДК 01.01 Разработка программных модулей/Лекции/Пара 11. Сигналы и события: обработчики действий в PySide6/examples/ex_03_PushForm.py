import sys
from PySide6.QtWidgets import QPushButton, QLabel, QLineEdit, QVBoxLayout, QHBoxLayout, QWidget, QApplication

class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()

        # элементы интерфейса
        self.label = QLabel("Имя участника")
        self.tinyLabel = QLabel()
        self.input = QLineEdit()
        self.inputWatch = QLineEdit("Предпросмотр:")
        self.btnPush = QPushButton("Отправить")
        self.btnClear = QPushButton("Очистить")

        # размещение элементов
        mainLayout = QVBoxLayout()
        btnLayout = QHBoxLayout()

        for item in (self.btnPush, self.btnClear):
            btnLayout.addWidget(item)

        for item in (self.label, self.input, self.inputWatch):
            mainLayout.addWidget(item)

        self.setLayout(mainLayout)
        mainLayout.addLayout(btnLayout)
        mainLayout.addWidget(self.tinyLabel)

        # обработчики
        self.input.textChanged.connect(self.inputName)
        self.btnPush.clicked.connect(self.push)
        self.btnClear.clicked.connect(self.clear)

        # данные окна
        self.setWindowTitle("Форма заявки")
        self.resize(400, 200)

    # обработчик 1 - отоброжение ввода
    def inputName(self):
        self.inputWatch.setText("Предпросмотр: " + self.input.text())

    # обработчик 2 - отправка формы
    def push(self):
        self.tinyLabel.setText("Форма отправлена")

    # обработчик 3 - очистка формы
    def clear(self):
        self.input.setText("")
        self.inputWatch.setText("Предпросмотр: ")

app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())