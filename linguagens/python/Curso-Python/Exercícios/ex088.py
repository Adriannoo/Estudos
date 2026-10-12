from random import randint
dados = list()
jogos = list()
quant = int(input('Quantos jogos você quer que eu sorteie? '))
total = 1
while total <= quant:
    cont = 0
    while True:
         num = randint(1, 60)
         if num not in dados:
             dados.append(num)
             cont += 1
         if cont >= 6:
                break
    dados.sort()
    jogos.append(dados[:])
    dados.clear()
    total += 1
print('—' * 10, f'SORTEANDO {quant} JOGOS', '—' * 10)
for i, l in enumerate(jogos):
    print(f'Jogo {i + 1}: {l}')