cores = {'limpa': '\033[m',
         'azul': '\033[34m',
         'linhas': '\033[4;36m',
         'vermelho': '\033[31m',
         'amarelo': '\033[33m'}
a = '—'*32
print('{}{}{}'.format(cores['linhas'], a, cores['limpa']))
casa = float(input('Qual o valor da casa ? \nR$ '))
salário = float(input('Qual o salário do comprador ? \nR$'))
anos = int(input('Quantos anos de financiamento ? \n'))
prestação = casa / (anos * 12)
mínimo = salário * 30 / 100
print('Para pagar uma casa de {}R${:.2f}{} em {} anos, a prestação será de {}R${:.2f}{} !'
      .format(cores['amarelo'],casa ,cores['limpa'], anos, cores['amarelo'], prestação, cores['limpa']))
if prestação <= mínimo:
    print('{}Empréstimo pode ser condedido !{}'.format(cores['azul'], cores['limpa']))
else:
    print('{}Empréstimo negado !{}'.format(cores['vermelho'], cores['limpa']))
print('{}{}{}'.format(cores['linhas'], a, cores['limpa']))