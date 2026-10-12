print('—'*32)
num1 = int(input('Digite o primeiro número = '))
num2 = int(input('Digite o segundo valor = '))
num3 = int(input('Digite o terceiro valor = '))
# Verificando quem é o menor
menor = num1
if num2 < num1 and num2 < num3:
    menor = num2
if num3 < num1 and num3 < num2:
    menor = num3
# Verificando quem é o maior
maior = num1
if num2 > num1 and num2 > num3:
    maior = num2
if num3 > num1 and num3 > num2:
    maior = num3
print('O maior valor é {}'.format(maior))
print('O menor valor é {}'.format(menor))
print('—'*32)
