valores = list()
while True:
    v = (int(input('Digite um valor: ')))
    if v not in valores:
        valores.append(v)
        print('Valor adicionado com sucesso...')
    else:
        print('Valor duplicado! Não vou adicionar...')
    op = str(input('Quer continuar?[S/N] ')).strip().upper()[0]
    if op == 'N':
        break
print('-' * 32)
valores.sort()
print(f'Você digitou os valores {valores} !')
