print('—' * 16)
print('Sequência de Fibonacci')
print('—' * 16)
n = int(input('Quantos termos você quer mostrar? '))
t1 = 0
t2 = 1
cont = 3
print('{} > {}'.format(t1, t2), end='')
while cont <= n:
    t3 = t1 + t2
    print(' > {}'.format(t3), end='')
    t1 = t2
    t2 = t3
    t3 = t1
    cont += 1
print(' > Fim.')
print('\n', '—' * 16)
