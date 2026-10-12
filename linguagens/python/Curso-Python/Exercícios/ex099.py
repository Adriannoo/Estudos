# Faça um programa que tenha uma função chamada maior(), que receba vários parâmetros com valores inteiros.
# Seu programa tem que analisar todos os valores e dizer qual deles é o maior.

from time import sleep

def maior(* núm):
    mai = cont = 0
    print('—-—' * 16)
    print('Analisando os valores passados...', flush=True)
    sleep(0.5)

    for valor in núm:
        print(valor, end=' ', flush=True)
        sleep(0.3)
        
        if cont == 0:
            mai = valor

        else:
            if mai < valor:
                mai = valor
        cont += 1

    print()
    print(f'\nO maior valor foi {mai}.')
    print(f'Foram informados {cont} valores!')
    print('—-—' * 16)


# Programa principal
maior(4, 5, 1, 10)
maior(2, 3, 20)
maior(142, 320, 1052)
maior(1)
maior() 

print()   