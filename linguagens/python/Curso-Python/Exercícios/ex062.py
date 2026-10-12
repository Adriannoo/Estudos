print('Gerador de PA')
print('—' * 16)
primeiro = int(input('Primeiro termo = '))
razão = int(input('Razão = '))
cont = 1
termo = primeiro
mais = 10
total = 0
while mais != 0:
    total += mais
    while cont <= total:
        print('{} > '.format(termo), end='')
        cont += 1
        termo += razão
    print('Pausa')
    mais = int(input('Quantos termos você quer mostrar a mais? '))
print('A prograssão finalizada com {} termos mostrados!'.format(total))
