from random import randint
from time import sleep
print('—' * 24)
itens = ('Pedra', 'Papel', 'Tesoura')
computador = randint(0, 2)
print('''Suas opções =
[0]Pedra
[1]Papel
[2]Tesoura''')
jogador = int(input('Qual é a sua jogada ? '))
print('JO')
sleep(0.8)
print('KEN')
sleep(0.8)
print('PO !!')
sleep(0.8)
print('-=-' * 14)
print('Computador jogou {}'.format(itens[computador]))
print('Jogador jogou {}'.format(itens[jogador]))
print('-=-' * 14)
if computador == 0:  # computador jogou pedra
    if jogador == 0:
        print('Empate')
    elif jogador == 1:
        print('Jogador Venceu !')
    elif jogador == 2:
        print('Computador Venceu!')
    else:
        print('Jogada inválida')
elif computador == 1:  # computador jogou papel
    if jogador == 0:
        print('Computador Venceu !')
    elif jogador == 1:
        print('Empate')
    elif jogador == 2:
        print('Jogador Venceu !')
    else:
        print('Jogada inválida')
elif computador == 2:  # computador jogou tesoura
    if jogador == 0:
        print('Jogador Venceu !')
    elif jogador == 1:
        print('Computador Venceu !')
    elif jogador == 2:
        print('Empate')
    else:
        print('Jogada inválida')
print('—' * 24)
