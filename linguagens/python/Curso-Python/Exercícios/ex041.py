from datetime import date
atual = date.today().year
ano = int(input('Ano de nascimento = '))
idade = atual - ano
if idade <= 9:
    print('A categoria do atleta é: MIRIM.')
elif 9 < idade <= 14:
    print('A categoria do atleta é: INFANTIL')
elif 14 < idade <= 19:
    print('A categoria do atleta é: JÚNIOR')
elif 19 < idade <= 25:
    print('A categoria do atleta é: SÊNIOR')
else:
    print('A categoria do atleta é: MASTER')
