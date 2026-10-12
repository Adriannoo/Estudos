from time import sleep

def contador(i, f, p):
    print('—-—' * 16)
    print(f'Contagem de {i} a {f} pulando de {p} em {p}:')
    sleep(1.5)
    print('—-—' * 16)

    if p < 0:
        p *= -1

    if p == 0:
        p = 1

    if i < f:
        cont = i
        while cont <= f:
            print(f'{cont} ', end='', flush=True)
            sleep(0.4)
            cont += p

        print('FIM!')
        print()

    else:
        cont = i
        while cont >= f:
            print(f'{cont} ', end='', flush=True)
            sleep(0.4)
            cont -= p

        print('FIM!')
        print()


# Programa principal
contador(1, 10, 1)
contador(10, 0, 2)

print('—-—' * 16)
print('Agora é a sua vez de personalizar a contagem!')
ini = int(input('Início: '))
fim = int(input('Até: '))
pul = int(input('Pulando de: '))
print('—-—' * 16)
print()

contador(ini, fim, pul)
