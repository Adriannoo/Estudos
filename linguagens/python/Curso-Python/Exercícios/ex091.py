# Crie um programa onde 4 jogadores joguem um dado e tenham resultados aleatórios.
# Guarde esses resultados em um dicionário em Python. No final, coloque esse dicionário em ordem, sabendo que o vencedor tirou o maior número no dado.

from random import randint
from time import sleep
from operator import itemgetter

jogadores = {
    'jogador_1':(randint(0, 6)),
    'jogador_2':(randint(0, 6)),
    'jogador_3':(randint(0, 6)),
    'jogador_4':(randint(0, 6))
}

ranking = dict()

for k, v in jogadores.items():
    print(f'{k} jogou {v}')
    sleep(1)

print('—~—' * 13)

# Quero pegar o valor na posição [1]. Importar from operator import itemgetter
ranking = sorted(jogadores.items(), key = itemgetter(1), reverse = True)

# Tratar como uma lista, porque ele passa a ser uma lista!!!!!

for i, v in enumerate(ranking):
    print(f'Em {i + 1}º lugar ficou {v[0]} com {v[1]} pontos!')
    sleep(1)