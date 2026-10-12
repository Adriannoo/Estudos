"""from math import factorial
num = int(input('Digite um número para calcular seu fatorial = '))
f = factorial(num)
print('O fatorial de {} é {}'.format(num, f))"""
n = int(input('Digite um número para calcular seu fatorial = '))
c = n
f = 1
while c > 0:
    print('{}'.format(c), end='')
    print(' x ' if c > 1 else ' = ', end='')
    f *= c
    c -= 1
print('{} !'.format(f))
