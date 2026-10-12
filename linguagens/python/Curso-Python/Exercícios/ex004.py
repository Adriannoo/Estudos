n = input('Escreva algo para mim = ')
print('O tipo primitivo desse valor é = ', type(n))
s1 = (n.isalnum())
s2 = (n.isalpha())
s3 = (n.isupper())
s4 = (n.isdecimal())
print('ele é um número = {}, ele é alpha = {}, ''ele está em letra maiúscula = {},'
      ' ele é decimal = {}. '.format(s1, s2, s3, s4))
