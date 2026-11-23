def finale_price(total, vip):
    if total <= 0:
        raise ValueError("Неккоректная сумма")
    return total * 9 // 10 if vip else total