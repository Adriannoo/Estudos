print('='*32)
nome = str(input('Digite seu nome \n')).strip()
split = nome.split()
print('Seu primeiro nome é {}\nE seu último nome é {}'.format(split[0], split[-1]))
print('='*32)

# print('Seu primeiro nome é {}\nE seu último nome é {}'.format(split[0], split[len(nome)-1]))
