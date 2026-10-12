# Funções pt1

# ——————————————————————————————————————————————

# def linha():
#     print('—~—' * 16)


# PROGRAMA PRINCIPAL
# linha()
# print('Faze Ows')
# linha()

# ——————————————————————————————————————————————

# def mensagem(msg):
#     print('—~—' * 16)
#     print(msg)
#     print('—~—' * 16)


# mensagem('Faze Ows')

# ——————————————————————————————————————————————
# def soma(a, b):
#     print(f'A = {a}, B = {b}')
#     s = a + b
#     print(f'A soma entre A + B é de {s}')
#     print()

    
#  Programa principal
# soma(a = 9, b = 2)
# soma(b = 3, a = 13)
# soma(a = 9, b = 9)

# ——————————————————————————————————————————————

# def contador(*núm):
#     tam = len(núm)
#     print(f'Recebi os valores {núm} e são {tam} números!')
#     print()


# contador(4, 6, 1)
# contador(3, 5, 1, 4, 0)
# contador(3, 1, 4, 7, 9, 10)

# ——————————————————————————————————————————————

# valores = [3, 5, 7, 1, 10]

# def  dobra(list):
#     pos = 0
#     while pos < len(list):
#         list[pos] *= 2
#         pos += 1

# print(f'Sem os valores dobrados = {valores}')

# dobra(valores)
# print(f'Com os valores dobrados = {valores}')
# print()

# ——————————————————————————————————————————————

# DESEMPACOTAMENTO: 

def soma(* valores):
    s = 0

    for num in valores:
        s += num

    print(f'A soma dos valores {valores} é {s} !')

soma(8, 2, 1)
soma(9, 1, 10)

# ——————————————————————————————————————————————