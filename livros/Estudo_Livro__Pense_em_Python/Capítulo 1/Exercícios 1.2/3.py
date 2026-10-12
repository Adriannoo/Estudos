#  Se você correr 10 quilômetros em 42 minutos e 42 segundos, qual é o seu
# passo médio (tempo por milha em minutos e segundos)? Qual é a sua
# velocidade média em milhas por hora?

def leiafloat(msg):
    while True:
        try:
            n = float(input(msg))
        
        except(ValueError, TypeError):
            print('ERRO! Por favor, digite um valor válido!')
            continue

        return n

s = leiafloat('Digite a distância percorrida pelo objeto (Km): ')
t = leiafloat('Digite o Tempo percorrido pelo objeto (h): ')

if t > 0:
    v = s/t
    print(f'A velocidade média é de {v:.2f}!')

else:
    print('ERRO! O valor de tempo tem que ser positivo!')
    print('Tente Novamente!')