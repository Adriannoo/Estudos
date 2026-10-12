print('—' * 32)
número = int(input('Digite um número inteiro = '))
print('Escolha uma das bases para conversão:\n'
      '[1] Converter para BINÁRIO\n'
      '[2]Converter para OCTAL\n'
      '[3]Converter para HEXADECIMAL\n')
opção = int(input('Sua opção = '))
if opção == 1:
    print('{} Convertido para BINÁRIO é igual a {}'.format(número, bin(número)[2:]))
elif opção == 2:
    print('{} Convertido para OCTAL é igual a {}'.format(número, oct(número)[2:]))
elif opção == 3:
    print('{} Convertido para HEXADECIMAL é igual a {}'.format(número, hex(número)[2:]))
else:
    print('Opção inválida, Tente Novamente !')
