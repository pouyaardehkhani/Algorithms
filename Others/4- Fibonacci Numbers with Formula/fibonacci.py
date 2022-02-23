import math


def fibo(n):
    phi = (1 + math.sqrt(5)) / 2
    return round(pow(phi, n) / math.sqrt(5))