def vetor_primo(vetor):
    for n, i in enumerate(vetor):
        if i == 2:
            vetor[n] = -1
        elif i > 1:
            for k in range(2, i + 1):
                if i % k == 0:
                    break
                else:
                    vetor[n] = -1
    print(vetor)


vetor_primo([2, 3, 4, 5, 6, 7])
