lista = list()
par = list()
ímpar = list()
while True:
    lista.append(int(input('Digite um valor: ')))
    op = str(input('Quer continuar? [S/N] ')).strip().upper()[0]
    if 'N' in op:
        break
for i, v in enumerate(lista):
    if v % 2 == 0:
        par.append(v)
    elif v % 2 == 1:
        ímpar.append(v)
print('—' * 24)
print(f'A lista completa é {lista}')
print(f'A lista de pares é {par}')
print(f'A lista de ímpares é {ímpar}')
print('—' * 24)
