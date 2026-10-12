nome = str(input('Qual é seu nome ? \n')).strip()
if nome == 'Ows':
    print('Que nome top !')
elif nome == 'Fifa' or nome == 'Mongraal' or nome == 'Nouso':
    print('Que nome bomba !')
else:
    print('Seu nome é bem padrão')
print('Tenha um bom dia, {}!'.format(nome))
