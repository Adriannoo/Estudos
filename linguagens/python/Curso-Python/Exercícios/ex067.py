while True:
    n = int(input('Quer ver a tabuada de qual valor?(Número negativo para encerrar) '))
    if n < 0:
        break
    else:
        print('-' * 36)
        for c in range(1, 11):
            print(f'{n} x {c} = {n * c}')
        print('-' * 36)
print('Programa tabuada encerrado!')
