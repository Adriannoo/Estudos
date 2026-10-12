valor = list()

while True:
    valor.append(int(input('Digite um valor: ')))
    op = str(input('Quer continuar?[S/N] ')).strip().upper()[0]

    if op == 'N':
        break

print('—' * 48)
print(f'Você digitou {len(valor)} valores!')

if 5 in valor:
    print('O valor 5 faz parte da lista!')
else:
    print('O valor 5 não foi encontrado na lista!')

valor.sort(reverse=True)

print(f'Os valores em forma decrescente são {valor}')
print('—' * 48)