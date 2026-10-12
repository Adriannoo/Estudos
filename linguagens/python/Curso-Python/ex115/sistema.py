from lib.interface import *
from lib.arquivo import *
from time import sleep

print()
arq = 'listanomes.txt'

if not arquivoExiste(arq):
    criarArquivo(arq)

while True:
    resposta = menu(['Ver pessoas cadastradas', 'Cadastrar nova Pessoa', 'Sair do Sistema'])

    if resposta == 1:
        # Opção de listar o conteúdo de um arquivo!
        lerArquivo(arq)

    elif resposta == 2:
        # Opção para cadastrar uma pessoa!
        cabeçalho('NOVO CADASTRO')
        nome = str(input('Nome: ')).strip()
        idade = leiaInt('Idade: ')
        cadastrar(arq, nome, idade)

    elif resposta == 3:
        # Opção finalizar o sistema!
        cabeçalho('Saindo do Sistema... Até mais!')
        break
    else:
        print('\033[31mERRO! Opção inválida!\033[m\n')
        sleep(1)

print()