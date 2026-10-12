from random import choice
print('Sorteio de noobs para enfrentar Faze Ows')
n1 = str(input('Primeiro jogador = '))
n2 = str(input('Segundo jogador = '))
n3 = str(input('Terceiro jogador = '))
n4 = str(input('Quarto jogador = '))
lista = [n1, n2, n3, n4]
escolhido = choice(lista)
print('O noob lixo que vai perder foi {}'.format(escolhido))
