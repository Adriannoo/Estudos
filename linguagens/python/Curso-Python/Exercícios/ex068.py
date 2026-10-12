from random import randint
v = 0
while True:
    jogador = int(input('Digite um valor = '))
    computador = randint(0, 11)
    total = jogador + computador
    tipo = ' '
    while tipo not in 'PI':
        tipo = str(input('Pár ou Ímpar?[P/I] = ')).strip().upper()[0]
    print(f'Você jogou {jogador} e o computador jogou {computador}. Total de {total}, ', end='')
    print('deu pár!'if total % 2 == 0 else 'deu ímpar!')
    if tipo == 'P':
        if total % 2 == 0:
            print('Você ganhou!')
            v += 1
        else:
            print('Você perdeu!')
            break
    elif tipo == 'I':
        if total % 2 == 1:
            print('Você ganhou!')
            v += 1
        else:
            print('Você perdeu!')
            break
    print('Vamos jogar novamente...')
print(f'Você ganhou {v}x do computador!')
