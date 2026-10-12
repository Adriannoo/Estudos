"""print('\033[7;40mOlá, Mundo !\033[m')"""
nome = 'Ows'
cores = {'limpa': '\033[m',
         'azul': '\033[34m',
         'amarelo': '\033[033m',
         'pretoebranco': '\033[7 ; 30m'}
print('Olá {}{}{}, Bem vindo a Faze !'.format(cores['azul'], nome, cores['limpa']))
