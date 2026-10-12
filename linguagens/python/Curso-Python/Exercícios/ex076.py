lista = ('Lápis', '1.50',
        'Borracha', '2.00', 
        'Caderno', '15.00',
        'Mochila', '30.00',
        'Estojo', '10.00',
        'Cartolina', '0.50', 
        'Notebook', '3.500.00',
        'Mouse', '150.00')
print('-' * 40)
print(f'{"Listagem de Preços":^40}')
print('-' * 40)
for pos in range(len(lista)):
    if pos % 2 == 0:
        print(f'{lista[pos]:.<30}', end='')
    if pos % 2 == 1:
        print(f'R${lista[pos]}')
print('-' * 40)
