def pintonto(msg='', senha=''):
    senha = input(str('O que você vai escrever? ')).strip().upper()

    if senha == 'PINTONTO':
        print('Séloko, ai sim!')
    else:
        print('\nAfff, nem escreveu Pintonto.')

    msg = senha
    tam = len(msg)

    print('—' * tam)
    print(f'{msg}')
    print('—' * tam)


pintonto()
