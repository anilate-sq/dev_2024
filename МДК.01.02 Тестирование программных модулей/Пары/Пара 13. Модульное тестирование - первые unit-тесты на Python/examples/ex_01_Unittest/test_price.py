import unittest
from price import finale_price

class TestPrice(unittest.TestCase):
    def test_vip(self):
        actual1 = finale_price(1000, True)
        actual2 = finale_price(2000, True)
        actual3 = finale_price(3000, True)

        self.assertEqual(actual1, 900)
        self.assertEqual(actual2, 1800)
        self.assertEqual(actual3, 2700)