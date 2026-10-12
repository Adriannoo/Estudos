# Exercício: Crie um programa que leia nome, sexo e idade de várias pessoas.
# Guardando os dados de cada pessoa em um dicionário e todos os dicionários em uma lista. No final, mostre: 

# A) Quantas pessoas foram cadastrada;
# B) A média de idade;
# C) Uma lista com as mulheres;
# D) Uma lista de pessoas com idade acima da média.

dados = dict()
lista = list()
soma = média = 0

while True:
    dados.clear()
    print('—~—' * 16)
    dados['Nome'] = str(input('Nome: ')).strip().title()

    while True:
        dados['Sexo'] = str(input('Sexo: ')).strip().upper()[0]

        # Se a pessoa digitar outra coisa se não for Masculino ou Feminino = 

        if dados['Sexo'] in 'MF':
            break
        print('ERRO! Por favor, digite apenas M ou F.')

    dados['Idade'] = int(input('Idade: '))
    soma += dados['Idade']
    lista.append(dados.copy())

    while True:
        op = str(input('Quer continuar? [S/N] ')).strip().upper()[0]

        # Se a pessoa digitar outra coisa a não ser sim ou não = 

        if op in 'SN':
            break

        print('ERRO! Responda apenas com S ou N.')
        print()

    print('—~—' * 16)
    print()

    if op == 'N':
        break

print('—~—' * 16)

print(f'Foram cadastradas {len(lista)} pessoas!')

média = soma / len(dados)
print(f'A média de idade das pessoas é de {média :.0f} anos!')

print('As mulheres cadastradas são = ', end = '')
for d in lista:
    if d['Sexo'] == 'F':
        print(f'{d["Nome"]} ', end = '')
print()

print('As pessoas com a idade maior que a média são = ')
for p in lista:
    if p['Idade'] >= média:
        for k, v in p.items():
            print(f'{k} = {v} → ', end = '')
        print('FIM')
    print()

print('—~—' * 16)
print('—' * 18, 'ENCERRANDO', '—' * 18)
print('—~—' * 16)
print()
