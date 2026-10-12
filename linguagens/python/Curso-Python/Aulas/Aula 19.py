# Aula sobre Dicionários!

# ———————————————————————————————

# dados = dict()
# dados = {'Nome':'Rogério', 'Idade':'24'}

# Aspas duplas para referenciar
# print(f'O {dados["nome"]} tem {dados["Idade"]} anos!')

# Adicionar elemento:
# dados['Sexo'] = 'M'

# Substituir elementos:
# dados['Nome'] = 'Gustavo'

# Remover elementos:
# del dados['Idade']

# ———————————————————————————————

# filme = {
#     'Titulo':'Star Wars',
#     'Ano':'1977',
#     'Diretor':'George Lucas'
# }

# Retorna todos os valores:
# print(filme.values())

# Pega as chaves:
# print(filme.keys())

# Pegar ambos:
# print(filme.items())

# Para cada 'Key' e 'Value' no filme.items():

# for k, v in filme.items():
#     print(f'O {k} é {v}')

# ———————————————————————————————

# locadora = list()

# Primeiro elemento:

# filme_1 = {
#     'Titulo':'Star Wars',
#     'Ano':'1977',
#     'Diretor':'George Lucas'
# }

# locadora.append(filme_1)

# Segundo elemento:

# filme_2 = {
#     'Titulo':'Avangers',
#     'Ano':'2012',
#     'Diretor':'Joss Whedon'
# }

# locadora.append(filme_2)

# for cartaz, cinema in enumerate(locadora):
#     print(f'O cartaz {cartaz + 1} é o filme {cinema}')

# ———————————————————————————————

estado = dict()
brasil = list()

for c in range(0, 3):

    estado['Unidade Federativa'] = str(input('Unidade Federativa: ')).strip().title()
    estado['Sigla'] = str(input('Sigla do Estado: ')).strip().upper()
    print('—' * 24)
    brasil.append(estado.copy())

for e in brasil:
    # Da para fazer assim:

    # for key, value in e.items():
    #     print(f'O campo {key} tem valor = {value}')

    # Ou:
    
    for v in e.values():
        print(v, end = ' ')
        print()

    print('—' * 32)
