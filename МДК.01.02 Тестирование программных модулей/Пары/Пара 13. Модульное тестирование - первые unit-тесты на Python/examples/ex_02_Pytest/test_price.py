from price import finale_price

def test_vip_discount():
    total1, vip1 = 1000, True
    total2, vip2 = 2000, True
    total3, vip3 = 3000, True
    result1 = finale_price(total1, vip1)
    result2 = finale_price(total2, vip2)
    result3 = finale_price(total3, vip3)
    assert result1 == 900
    assert result2 == 1810
    assert result3 == 2700