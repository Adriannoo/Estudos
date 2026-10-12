cont = média = soma = maior = menor = 0
resp = 'S'
while resp in 'Ss':
    valor = int(input('Digite um valor = '))
    cont += 1
    soma += valor
    if cont == 1:
        maior = menor = valor
    else:
        if valor > maior:
            maior = valor
        if valor < menor:
            menor = valor
    resp = str(input('Quer continuar? [S/N] ')).upper().strip()[0]
média = soma / cont
print('Você digitou {} valores e a média entre eles é de {:.2f} .'.format(cont, média))
print('O maior valor foi {} e o menor foi {}!'.format(maior, menor))
