valores = list()
for c in range(0, 5):
    valores.append(int(input(f'Digite um valor para a posição {c} = ')))
print('-' * 24)
maior = max(valores)
menor = min(valores)
print(f'Você digitou os valores{valores}')
print(f'O maior valor digitado foi {maior} nas posições, ', end='')
for i, v in enumerate(valores):
    if v == maior:
        print(f'{i}... ', end='')
print()
print(f'O menor valor digitado foi {menor} nas posições ', end='')
for i, v in enumerate(valores):
    if v == menor:
        print(f'{i}... ', end='')
print()
# Maior e Menor valor pode ser digitado dessa forma também:
'''mai = 0
    men = 0
    if c == 0: # c de contador do for
        mai = men = valores
    else:
     if valores > mai:
           mai = valores
        if valores < men:
           men = valores'''
# Importante reduzir códigos!