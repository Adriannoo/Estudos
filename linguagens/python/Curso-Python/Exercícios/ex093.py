dados = dict()
gols_partida = list()

dados['Nome'] = str(input('Nome do Jogador: ')).strip().title()
partidas = int(input(f'Quantas partidas {dados["Nome"]} jogou? '))

for c in range(0, partidas):
    gols_partida.append(int(input(f'Quantos gols na partida {c + 1}? ')))

dados['Gols'] = gols_partida[:]
dados['Total'] = sum(gols_partida) # Sum = soma!

print()
print('—~—' * 16)
print(dados)
print('—~—' * 16)
print()

print('—~—' * 16)

for k, v in dados.items():
    print(f'{k} tem o valor {v}')

print('—~—' * 16)
print()

print('—~—' * 16)
print(f'O jogador {dados["Nome"]} jogou {partidas} partidas!')
print()

for c in range(0, partidas):
    print(f'Na partida {c + 1}, fez {gols_partida[c]} gols.')

print()
print(f'Foi um total de {dados["Total"]} gols!')
print('—~—' * 16)
print()
