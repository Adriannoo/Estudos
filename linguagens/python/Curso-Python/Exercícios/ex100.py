# Faça um programa que tenha uma lista chamada números e duas funções chamadas sorteia() e somaPar(). 
# A primeira função vai sortear 5 números e vai colocá-los dentro da lista
# E a segunda função vai mostrar a soma entre todos os valores pares sorteados pela função anterior.

from random import randint
from time import sleep
números = list()

print()
def sorteia(lista):
    print('Sorteando 5 números da lista!', flush=True)
    sleep(1)
    for c in range(0, 5):
        lista.append(randint(0, 10))
    
    print('\nOs números sorteados foram ', end='')

    for n in lista:
        print(f'{n} ', end='', flush=True)
        sleep(0.3)


def somaPar(num):
    soma = 0
    for c in num:
        if c % 2 == 0:
            soma += c
    sleep(0.5)
    print(f'\nA soma dos números páres é de {soma}!\n', flush=True)


sorteia(números)
print()
somaPar(números)
print()