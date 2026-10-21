# Команда для установки: pip install Pyside6

from PySide6 import QtWidgets # подключем PySide6
app = QtWidgets.QApplication([]) # создаем экземпляр класса QApplication(приложение)
window = QtWidgets.QWidget() # создаем экземпляр класса QWindow(окно)
window.setWindowTitle("Первое окно") # заголовок окна
window.show() # отоброжаем окно
app.exec() # запускаем цикл событий