situação = ''

dados = dict()
dados['Nome'] = str(input('Nome do aluno: ')).strip().title()
dados['Média'] = float(input('Média do aluno: '))

print('—~—' * 14)

if dados['Média'] <= 5:
    situação = ('Reprovado')

elif 5 <= dados['Média'] < 7:
    situação = 'Recuperação'

if dados['Média'] > 7:
    situação = 'Aprovado'

# Da pra fazer assim: .Fiz assim porque fica mais bonito!
print(f'Nome é igual a {dados["Nome"]}')
print(f'A média é igual a {dados["Média"]}')
print(f'Situação de {dados["Nome"]} é igual a {situação}')

# Ou:
# if dados['Média'] >= 7:
#     dados['Situação'] = 'Aprovado'

# elif 5 <= dados['Média'] < 7:
#     dados['Situação'] = 'Recuperação'

# else:
#     dados['Situação'] = 'Reprovado'

# for key, value in dados.items():
#     print(f'{key} é igual a {value}')

print('—~—' * 14)