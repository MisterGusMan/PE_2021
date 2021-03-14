n = int(input())
x = int(input())
resp = True
for i in range(n - 1):
    x1 = int(input())
    if x > x1:
        print("NAO")
        resp = False
        break
    else:
        x = x1
if resp:
    print("SIM")