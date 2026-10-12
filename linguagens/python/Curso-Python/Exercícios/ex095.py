time = list()
dados = dict()
gols_partida = list()

while True:
    dados.clear()
    dados['Nome'] = str(input('Nome do Jogador: ')).strip().title()
    partidas = int(input(f'Quantas partidas {dados["Nome"]} jogou? '))
    gols_partida.clear()

    for c in range(0, partidas):
        gols_partida.append(int(input(f'— Quantos gols na partida {c + 1}? ')))

    dados['Gols'] = gols_partida[:]
    dados['Total'] = sum(gols_partida) # Sum = soma!
    time.append(dados.copy())

    while True:
        op = str(input('Quer continuar? [S/N] ')).strip().upper()[0]

        if op in 'SN':
            break
        print('ERRO! Digite apenas Sim ou Não.')
        
    if op == 'N':
        break

    print()

print()

print('—~—' * 16)

print(f'{"No.":<5}{"NOME":<13}{"GOLS":<13}{"TOTAL":<5}')

for k, v in enumerate(time):
    print(f'{k:<4} ', end = '')
    for d in v.values():
        print(f'{str(d):<13}', end = '')
    print()

print('—~—' * 16)
print()

while True:
    op2 = int(input('Mostrar dados de qual jogador? (999 para parar) '))
    
    if op2 == 999:
        break

    if op2 >= len(time):
        print(f'ERRO! Não existe jogador com código {op2}!')

    else:
        print()
        print(f'—— LEVANTAMENTO DO JOGADOR {time[op2]["Nome"]}:')

        for k, v in enumerate(time[op2]["Gols"]):
            print(f'— No jogo {k + 1} fez {v} gols!')
        print()
        
print('—~—' * 16)
print('VOLTE SEMPRE')
print()
