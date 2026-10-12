"""print('='*32)
print('='*32)
num = int(input('Informe um número = '))
n = str(num)
print('Analisando o número {}'.format(num))
print('Unidade = {}\nDezena = {}\nCentena = {}\nMilhar = {}'.format(n[3], n[2], n[1], n[0]))"""
print('='*32)
num = int(input('Informe um número = '))
u = num // 1 % 10
d = num // 10 % 10
c = num // 100 % 10
m = num // 1000 % 10
print('Analisando o número {}\nUnidade = {}\nDezena = {}\nCentena = {}\nMilhar = {}'.format(num, u, d, c, m))
print('='*32)
