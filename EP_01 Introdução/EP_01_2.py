i = int(input("Insira um número:\n"))
if i % 6 == 0:
    n = 1
    out = False
    while not out:
        if n * (n + 1) * (n + 2) == i:
            print("SIM\n")
            out = True
        elif n * (n + 1) * (n + 2) > i:
            print("NAO\n")
            out = True
        n = n + 1
else:
    print("NAO\n")
