from time import sleep

n1 = int(input('Primeiro valor = '))
n2 = int(input('Segundo valor = '))
op = 0
while op != 5:
    op = int(input('[1] - Somar\n[2] - Multiplicar\n[3] - Maior\n[4] - Novos números\n[5] - Sair do programa\n'
                   'Qual a sua opção ? '))
    if op == 1:
        soma = n1 + n2
        print('A soma entre {} + {} é {}'.format(n1, n2, soma))
    elif op == 2:
        mult = n1 * n2
        print('A multiplicação entre {} x {} é {}'.format(n1, n2, mult))
    elif op == 3:
        if n1 > n2:
            maior = n1
        else:
            maior = n2
        print('O maior entre {} e {} é {}'.format(n1, n2, maior))
    elif op == 4:
        print('Informe os números novamente:')
        n1 = int(input('Primeiro número = '))
        n2 = int(input('Segundo número = '))
    elif op == 5:
        print('Finalizando...')
    else:
        print('Opção Inválida. Tente Novamente !')
    print('—' * 16)
    sleep(1)
print('Fim do programa.')
