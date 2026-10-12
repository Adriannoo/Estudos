from random import randint
maior = menor = 0
na = (randint(1, 10), randint(1, 10), randint(1, 10), randint(1, 10), randint(1, 10))
print(f'Os valores sorteados foram = ', end='')
for n in na:
    print(f'{n} ', end='')
print(f'\nO maior valor sorteado foi de {max(na)}!')
print(f'O menor valor sorteado foi de {min(na)}!')
