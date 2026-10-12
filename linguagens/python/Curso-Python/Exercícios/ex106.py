cores = {
        'verde': '\033[30;42m',
        'cinza': '\033[7;37m',
        'vermelho': '\033[30;41m',
        'limpo': '\033[m'
    }

def título(msg, cor='limpo'):
    tam = len(msg) + 4
    print(cores[cor], end='')
    print('—' * tam)
    print(f'  {msg}  ')
    print('—' * tam)
    print(cores['limpo'], end='')


def ajuda(com):
    print(f'Acessando o manual do comando {com}')
    help(com)


while True:
    título('SISTEMA DE AJUDA PyHELP', cor='verde')

    print(cores['vermelho'])
    comando = str(input('Função ou Biblioteca > ')).strip()
    print(cores['limpo'])

    if comando.upper() == 'FIM':
        título('ATÉ LOGO!', cor='verde')
        print()
        break

    print(cores['cinza'], end='')
    ajuda(comando)
    print(cores['limpo'], end='')
