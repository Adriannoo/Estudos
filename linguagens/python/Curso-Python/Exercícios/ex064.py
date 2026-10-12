cont = soma = 0
n = int(input('Digite um número [999 para parar]: '))
while n != 999:
    soma += n
    n = int(input('Digite um número [999 para parar]: '))
    cont += 1
print('Você digitou {} números e a soma entre eles foi {}'.format(cont, soma))
