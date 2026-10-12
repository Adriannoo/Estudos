def área(largura, comprimento):
    cal = largura * comprimento
    print(f'A área de um terreno de {largura}x{comprimento} é de = {cal:.2f}m²')


print()

#Programa principal

l = float(input('Largura (m): '))
c = float(input('Comprimento (m): '))

print()
print('—' * 13
, 'CONTROLE DE TERRENOS', '—' * 13)
print('—-—' * 16)

# Da pra fazer assim:
# área(l, c)

# Ou:
área(largura = l, comprimento = c) # Prefiro assim, fica mais organizado

print('—-—' * 16)
print()