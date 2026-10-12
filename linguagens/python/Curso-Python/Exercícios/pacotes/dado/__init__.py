def leiaDinheiro(msg):
    válido = False
    while True:
        valor = str(input(msg)).strip().replace(',', '.') 


        if valor.isalpha() or valor == '':
            print(f'\033[31mERRO!: \"{valor}\" é um preço Inválido!\033[m')
        else:
            válido = True
            return float(valor)


def leiaInt(msg):
    while True:
        try:
            n = int(input(msg))

        except(ValueError, TypeError):
            print('\033[31mERRO!: Por favor, digite um valor real válido!\033[m')
            continue

        except(KeyboardInterrupt):
            print('\n\033[31mUsuário preferiu não digitar esse número\033[m')
            return 0

        else:
            return n



def leiaFloat(msg):
    while True:
        try:
            n = float(input(msg))

        except(ValueError, TypeError):
            print('\033[31mERRO!: Por favor, digite um valor inteiro válido!\033[m')
            continue

        except(KeyboardInterrupt):
            print('\n\033[31mUsuário preferiu não digitar esse número\033[m')
            return 0

        else:
            return n