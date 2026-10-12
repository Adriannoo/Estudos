"""print('—'*16)
tempo = int(input('Quantos anos o seu carro tem ? \n'))
# print('Carro novo' if tempo <=3 else'Carro velho')
if tempo <= 3:
    print('Carro novo')
else:
    print('Carro velho')
print('—'*16)"""
print('—'*16)
n1 = float(input('Primeira nota = '))
n2 = float(input('Segunda nota = '))
m = (n1 + n2)/2
print('A sua média foi {:.1f}'.format(m))
'''if m >= 6.0:
    print('Sua média foi boa, Parabéns !')
else:
    print('Sua média foi ruim ! Estude mais !')'''
print('Parabéns !' if m >= 6.0 else 'Estude mais !')
print('—'*16)
