from datetime import date
print('—'*24)
atual = date.today().year
sexo = str(input('Você é homem ou mulher ? \n')).strip().upper()
if sexo == 'MULHER':
    print('Desculpe o incômodo, tenha um bom dia !')
else:
    nasc = int(input('Ano de nascimento = '))
    idade = atual - nasc
    print('Quem nasceu no ano {} tem {} anos em {}.'.format(nasc, idade, atual))
    if idade == 18:
        print('Você tem que se alistar IMEDIATAMENTE !')
    elif idade < 18:
        s = 18 - idade
        print('Ainda faltam {} anos para o seu alistamento.'.format(s))
        a = atual + s
        print('Seu alistamento será em {}!'.format(a))
    elif idade > 18:
        s = idade - 18
        print('Você deveria ter se alistado há {} anos !'.format(s))
        a = atual - s
        print('Seu alistamento foi em {}!'.format(a))
print('—'*24)
