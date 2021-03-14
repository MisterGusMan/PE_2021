def log(x, n):
    soma = 0
    y = -1
    v = x - 1
    for i in range(1, n):
        y = y * v
        y = -y
        soma += y * (1 / i)
    return soma


print(log(0.5, 10))
