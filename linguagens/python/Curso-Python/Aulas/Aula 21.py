# ——————————————————————
# Vou aprender sobre:

# Interactive help;
# Docstrings;
# Argumentos opcionais;
# Escopo de variáveis;
# Retorno de resultados.
# ——————————————————————

# ——————————————————————————————————————————————————————————————————————————————————————————————————————————

# ————————————————
# Interactive Help
# ————————————————

# help(print)
# help(len)

# Mosta um guia de como usar as coisas, até bibliotecas!

# ——————————————————————————————————————————————————————————————————————————————————————————————————————————

# ——————————
# Docstrings
# ——————————

# def contador(i, f, p):
#     """
#     -> Faz uma contagem e mostra na tela
#     :param i: Início da contagem
#     :param f: Fim da contagem
#     :param p: Passo da contagem
#     :return: Sem retorno
#     """
#     c = i
#     while c <= f:
#         print(f'{c}..', end='')
#         c += p

#     print('FIM!')
    
# help(contador)

# contador(2, 20, 2)

# ——————————————————————————————————————————————————————————————————————————————————————————————————————————

# ————————————————————
# Parâmetros opcionais
# ————————————————————

# Se não tiver aonde receber, ele vai receber 0
# def somar(a=0, b=0, c=0):
#     s = a+b+c
#     print(f'A soma é {s}')


# somar(2, 1, 10)
# somar(3, 17) 
# somar(5)
# somar()

# ——————————————————————————————————————————————————————————————————————————————————————————————————————————

# ———————————————————
# Escopo de variáveis
# ———————————————————

# ESCOPO LOCAL ———————————————————————————————

# def teste():
#     x = 10
    # Escopo local, porque X não foi declarada fora do teste
    # print(f'Na função teste, n vale {n}')
    # print(f'Na função teste, x vale {x}')


# Programa principal

# print(f'No programa principal, n vale {x}')
# teste()

# ESCOPO GLOBAL ———————————————————————————————

# def teste():
#     print(f'Na função teste, n vale {n}')


# Programa principal

# n = 15
# print(f'No programa principal, n vale {n}')
# teste()

# OU: 

# ———————————————————————————————┐
# def teste(b):                  │
#    a = 10                      │ LINHA 100: Vai criar uma variavel A dentro do escopo local!
#    b += 10                     │
#    c = 20                      │
#    print(f'A Dentro vale {a}') │  <— ESCOPO LOCAL
#    print(f'B Dentro vale {b}') │
#    print(f'C Dentro vale {c}') │
# ―——————————————————————————————┘
# ―————————————————————————————————————————————―————┐
# print()                                           │
# a = 5                                             │
# teste(a)                                          │
#                                                   │
# print(f'A fora vale {a}')                         │ <— ESCOPO GLOBAL
# print(f'B fora vale {b}')<—Ta fora do escopo local│
# print(f'C fora vale {c}')<—por isso vai dar erro! │
# ―——————————————————————————————―——————————————————┘

# COMO TRATAR O A COMO GLOBAL NO LOCAL: ———————————————————————

# ———————————————————————————————┐
# def teste(b):                  │
#                                │
#    global a                    │ GLOBAL: Não vai criar a variável, vai usar o A global!
#    a = 10                      │ 
#    b += 10                     │
#    c = 20                      │
#    print(f'A Dentro vale {a}') │  <— ESCOPO LOCAL
#    print(f'B Dentro vale {b}') │
#    print(f'C Dentro vale {c}') │
# ―——————————————————————————————┘
# ―————————————————————————————————————————————―————┐
# print()                                           │
# a = 5                                             │
# teste(a)                                          │
#                                                   │
# print(f'A fora vale {a}')                         │ <— ESCOPO GLOBAL
# print(f'B fora vale {b}') Ta fora do escopo local │
# print(f'C fora vale {c}') por isso vai dar erro!  │
# ―——————————————————————————————―——————————————————┘

# ——————————————————————————————————————————————————————————————————————————————————————————————————————————

# ——————————————————
# RETORNO DE VALORES
# ——————————————————

# def somar(a=0, b=0, c=0):
#     s = a+b+c
    
#     return s # Posso retornar com qualquer formatação!


# soma1 = somar(3, 12, 1) # Posso jogar dentro de uma variável!
# soma2 = somar(10, 2)
# soma3 = somar(12)

# print(f'Meus cálculos deram {soma1}, {soma2} e {soma3}'), print()

# print('Meus cálculos deram', somar(10, 4, 12)) # Posso jogar dentro de um print!
# print()