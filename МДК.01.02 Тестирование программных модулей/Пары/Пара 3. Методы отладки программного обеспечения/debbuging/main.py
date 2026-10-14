from finance import *
from carts import *

product = cartProduct("Клавиатура", 5000, "Механическая клавиатура")
total = calculate_total(product[1], 2)

print(f'Заказ #1\nТовар: {product[0]}\nКоличество: 2\nЦена: {product[1]}\nИтоговая стоимость: {total}')