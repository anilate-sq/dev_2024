from PySide6.QtWidgets import ( 
    QApplication, QWidget , QVBoxLayout , 
    QLabel, QLineEdit , QPushButton) 

app = QApplication([]) 
w = QWidget();
box = QVBoxLayout(w) 
field = QLineEdit() 
label = QLabel("Введите имя") 
clear = QPushButton("Очистить")

for item in (field, label, clear): 
    box.addWidget(item) 
field.textChanged.connect(label.setText) 
clear.clicked.connect(field.clear) 
w.show(); 
app.exec()