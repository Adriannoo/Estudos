# início da aula
from modulos import numeros as utilidades

num = int(input('Digite um número: '))
fat = utilidades.fatorial(num)

print(f'O fatorial de {num} é de {fat}')
print(f'O dobro de {num} é {utilidades.dobro(num)}')
print(f'O triplo de {num} é {utilidades.triplo(num)}')
