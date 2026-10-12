from random import randint
pc = randint(0, 10)
palpites = 0
print('Acabei de pensar em um número entre 0 e 10.\nSerá que você consegue adivinhar o número ?')
acertou = False
while not acertou:
    jogador = int(input('Qual é o seu palpite ? '))
    palpites += 1
    if jogador == pc:
        acertou = True
    else:
        if jogador < pc:
            print('Mais... Tente mais uma vez !')
        else:
            print('Menos... Tente mais uma vez !')
print('Acertou !')
print('Você deu {} palpites !'.format(palpites))
