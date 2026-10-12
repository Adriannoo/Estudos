print('—'*16)
r1 = float(input('Primeiro segmento = '))
r2 = float(input('Segundo segmento = '))
r3 = float(input('Terceiro segmento = '))
if r1 < r2 + r3 and r2 < r1 + r3 and r3 < r1 + r2:
    print('Os segmentos acima podem formar um Triângulo,', end=' ')
    if r1 == r2 == r3:
        print('eles formam um Triângulo Equilátero !')
    elif r1 != r2 != r3 != r1 :
        print('eles formam um Triângulo Escaleno !')
    else:
        print('eles formarm um Triângulo Isósceles !')
else:
    print('Os segmentos acima não podem formar um Triângulo !')
print('—'*16)
