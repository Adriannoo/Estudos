print('—'*31)
s: float = float(input('Qual o salário do funcionário ? \nR$'))
# Salário maior que 1250.00R$
if s > 1250.00:
    v1 = s + (s*10/100)
    print('Com um aumento de 10%, agora o funcionário passa a receber {:.2f}R$ !'.format(v1))
if s < 1250.00:
    v2 = s + (s*15/100)
    print('Com um aumento de 15%, agora o funcionário passa a receber {:.2f}R$ !'.format(v2))
'''# Salário maior que 1250.00
if s >= 1250.00:
    novo = s + (s * 10 / 100)
# Salário menor que 1250.00
else:
    novo = s + (s * 15/100)
print('Quem ganhava {:.2f}R$, agora ele passa a receber {:.2f}R$ !'.format(s, novo))'''
print('—'*31)
