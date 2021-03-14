def primo(n):
    x = 0
    for i in range(2, n):
        m = n % i
        if m == 0:
            x += 1
    if x == 0:
        resp = "sim"
    else:
        resp = "nao"
    return resp


i, j = int(input("Primeiro Número:\n")), int(input("Segundo Número:\n"))
temp = 0
cont = 0
if i > j:
    temp = i
    i = j
    j = temp
for k in range(i, j + 1):
    if primo(k) == "sim":
        print("\n", k)
        cont += 1
        k = k + 1
print(f"Existem {cont} números primos entre {i} e {j}.")
