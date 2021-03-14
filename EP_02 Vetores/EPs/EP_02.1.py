v = []
n = int(input())
linha = 0
pos = 0
for k in range(n):
    num = int(input())
    v.append(num)
while pos != len(v):
    k = 0
    while k <= linha and pos < len(v):
        if k < linha:
            print(v[pos], end=" ")
        else:
            if k == linha:
                print(v[pos])
        pos += 1
        k += 1
    linha += 1
