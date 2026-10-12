cont = conti = h = m20 = 0
while True:
    cont += 1
    print('-' * 32)
    print('CADASTRE UMA PESSOA')
    print('-' * 32)
    idade = int(input(f'Idade da {cont}° pessoa: '))
    sexo = str(input(f'Sexo da {cont}° pessoa (M/F): ')).strip().upper()[0]
    print('-' * 32)
    perg = str(input('Quer continuar ?(S/N) ')).strip().upper()[0]
    if idade >= 18:
        conti += 1
    if sexo == 'M':
        h += 1
    if sexo == 'F' and idade < 20:
        m20 += 1
    if perg == 'N':
        break
print('-' * 32)
print(f'Total de pessoas com mais de 18 anos = {conti}')
print(f'Ao todo temos {h} homens cadastrados!')
print(f'E temos {m20} mulheres com menos de 20 anos!')
print('-' * 32)
