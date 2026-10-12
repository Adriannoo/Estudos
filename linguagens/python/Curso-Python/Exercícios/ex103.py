def ficha(jogador='—DESCONHECIDO—', gols=0):
    print(f'O jogador {jogador} fez {gols} gol(s) no campeonato!')

print()

nome = str(input('Nome do jogador: '))
g = str(input('Número de gols: ' ))

print('———' * 18)
if g.isnumeric():
    g = int(g)
else:
    g = 0

if nome.strip() == '':
    ficha(gols=g)
else:
    ficha(nome, g)

print()