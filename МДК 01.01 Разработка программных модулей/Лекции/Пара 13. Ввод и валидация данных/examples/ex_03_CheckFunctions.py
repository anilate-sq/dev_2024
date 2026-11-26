import sys
from PySide6.QtWidgets import QLineEdit, QPushButton, QWidget, QApplication, QLabel, QVBoxLayout


class MainWindow(QWidget):
    def __init__ (self):
        super().__init__()
        self.name = QLineEdit()
        self.name.setPlaceholderText("Введите имя")

        self.message = QLabel("")


    # функции для проверок
    
    def error(self):
        # в данной функции мы можем провести проверки на ошибки
        if not self.name.text().strip():
            self.message.setText("Введите имя")

        else:
            self.message.setText("аявка принятаЗ")
            # переход в следущее окно

    def refresh(self):
        self.error()     
        if self.message:
            return
        name_user = self.name.text()
        self.message.setText("Заявка принята") 
        return name_user
    


app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec())