print('============Exercício 6============')
n = int(input('Digite um número = '))
d = n * 2
t = n * 3
# r = n ** (1 / 2)
r = pow(n, (1 / 2))
print('O dobro de {} vale = {}'.format(n, d))
print('O triplo de {} vale = {}'.format(n, t))
print('A raiz quadrada de {} vale = {:.3f}'.format(n, r))
