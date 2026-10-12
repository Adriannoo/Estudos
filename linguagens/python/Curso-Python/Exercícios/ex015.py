d = int(input('Por quantos dias você alugou o carro ? '))
k = float(input('Quantos quilômetros você rodou com o carro ? '))
r = (d * 60) + (k * 0.15)
print('Sabendo que custa R$60 por dia e R%0.15 por km rodado, você deve pagar {:.2f}.'.format(r))
