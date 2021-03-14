out = False
v = []
while not out:
    i = int(input())
    if i == 1:
        a, b = int(input()), int(input())  # Soma de dois números
        res1 = a + b
        v.append(res1)
        print(res1)
    elif i == 2:
        a, b, c = int(input()), int(input()), int(input())  # Soma de três números
        res2 = a + b + c
        v.append(res2)
        print(res2)
    elif i == 3:
        a, b = int(input()), int(input())  # Multiplicação de dois números
        res3 = a * b
        v.append(res3)
        print(res3)
    elif i == 0:  # Saída
        out = True
        print(min(v))
    else:
        print("Insira um número entre 0 e 4")
