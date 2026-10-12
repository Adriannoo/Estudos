s = n = 0
while True:
    n = int(input('Digite um número = '))
    if n == 999:
        break
    s += n
# print('A soma dos valores vale {}.'.format(s))
print(f'A soma dos valores vale {s}.')
