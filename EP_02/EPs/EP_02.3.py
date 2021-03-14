"""Faça um programa que fique lendo números inteiros positivos:
• Cada número deverá ser inserido ordenado (ordem crescente) em um vetor (assuma que haverá no máximo 100 números).
• Após cada inserção, imprima o vetor completo. O programa encerra quando o usuário digitar o número -1 (não imprima o vetor após o usuário digitar -1, apenas encerre o programa)."""

v = []
x = 0
while x != -1:
    x = int(input())
    v.append(x)
    if len(v) >= 2:
        for i in range(len(v)):
            for k in range(i + 1, len(v)):
                if v[i] > v[k]:
                    temp = v[i]
                    v[i] = v[k]
                    v[k] = temp
    if x != -1:
        print(v)
