print('—' * 32)
preço = float(input('Preço das compras = R$'))
print('Esolha uma forma de pagamento ')
print('[1] À vista dinheiro/cheque')
print('[2] À vista cartão')
print('[3] 2x no cartão')
print('[4] 3x  ou mais no cartão')
n1 = preço - (preço * 10 / 100)
n2 = preço - (preço * 5 / 100)
n3 = preço
n4 = preço + (preço * 20 / 100)
opção = int(input('Qual a opção ? '))
if opção == 1:
    print('Sua compra de R${:.2f} vai custar R${:.2f} no final.'.format(preço, n1))
elif opção == 2:
    print('Sua compra de R${:.2f} vai custar R${:.2f} no final.'.format(preço, n2))
elif opção == 3:
    parcela = preço / 2
    print('Sua compra será parcelada em 2x de R${:.2f}'.format(parcela))
    print('Sua compra de R${:.2f} vai custar R${:.2f} no final.'.format(preço, n3))
elif opção == 4:
    parcelas = int(input('Quantas parcelas ? '))
    juros = preço * 20 / 100
    total = juros + preço
    parcela = total / parcelas
    print('Sua compra será parcelada em {}x de R${:.2f} com juros'.format(parcelas, parcela))
    print('Sua compra de R${:.2f} vai custar R${:.2f} no final.'.format(preço, total))
else:
    print('Opção inválida. Tente novamente!')
print('—' * 32)
