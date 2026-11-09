def delivery_fee(total, pickup):
    fee = 300 #I1
    if pickup:
        fee = 0
    elif total >= 2000:
        fee = 0
    return fee


# T1
print("Результат первого теста: ", delivery_fee(1500, True))
# T2
print("Результат второго теста: ", delivery_fee(2500, False))
# T3
print("Результат третьего теста: ", delivery_fee(1500, False))