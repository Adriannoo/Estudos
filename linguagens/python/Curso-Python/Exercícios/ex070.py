print('{:-^32}'.format('Loja Faze Ows'))
cont = soma = totmil = menor = 0
barato = ''
while True:
    nome = str(input('Nome do produto = ')).strip()
    preço = float(input('Preço = R$'))
    cont += 1
    soma += preço
    if preço >= 1000:
        totmil += 1
    if cont == 1 or preço < menor:
        menor = preço
        barato = nome
    op = ' '
    while op not in 'SN':
        op = str(input('Quer continuar? [S/N] ')).strip().upper()[0]
    if op == 'N':
     break
print(f'O total da compra foi {soma:.2f}')
print(f'Temos {totmil} produtos que custam mais de R$1000.00')
print(f'O produto mais barato é {barato} e custa R${menor:.2f}')
