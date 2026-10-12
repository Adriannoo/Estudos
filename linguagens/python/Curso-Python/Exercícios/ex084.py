dados1 = list()
dados2 = list()
cont = mai = men = 0
while True:
    cont += 1
    dados1.append(str(input(f'Nome da {cont}ª pessoa: ')).strip().title())
    dados1.append(float(input(f'Peso da {cont}ª pessoa: ')))
    if len(dados2) == 0:
        mai = men = dados1[1]
    else:
        if dados1[1] > mai:
            mai = dados1[1]
        if dados1[1] < men:
            men = dados1[1]
    dados2.append(dados1[:])
    dados1.clear()
    op = str(input('Quer continuar? [S/N] ')).strip().upper()[0]
    if op == 'N':
        break
# Se não usar o contador pode simplesmente mostrar o len da lista principal
print(f'Você cadastrou {cont} pessoas.')
print(f'O maior peso foi de {mai}Kg. Peso de ', end = '')
for p in dados2:
    if p[1] == mai:
        print(f'{p[0]}, ', end = '')
print()
print(f'O menor peso foi de {men}Kg. peso de ', end = '')
for p in dados2:
    if p[1] == men:
        print(f'{p[0]}, ', end = '')
