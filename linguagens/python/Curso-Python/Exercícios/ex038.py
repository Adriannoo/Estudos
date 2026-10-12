cor = {'azul': '\033[34m',
       'am': '\033[36m',
       'vermelho': '\033[31m',
       'roxo': '\033[35m',
       'limpa': '\033[m'}
print('—' * 16)
n1 = float(input('Primeiro Valor = '))
n2 = float(input('Segundo valor = '))
if n1 == n2:
    print('{}Os valores {}{}{} {}e{} {}{}{} {}são iguais !{}'
          .format(cor['vermelho'], cor['am'], n1, cor['limpa'], cor['vermelho'], cor['limpa'], cor['am'], n2,
                  cor['limpa'], cor['vermelho'], cor['limpa']))
elif n1 > n2:
    print('{}O primeiro número é maior !{}'.format(cor['azul'], cor['limpa']))
else:
    print('{}O segundo número é maior !{}'.format(cor['roxo'], cor['limpa']))
print('—' * 16)
