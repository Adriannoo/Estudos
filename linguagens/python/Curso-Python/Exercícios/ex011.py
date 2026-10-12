L = float(input('Largura da parede = '))
al = float(input('Altuda da parede = '))
m2 = L * al
print('Sua parede tem a dimensão de {}x{} e sua área de {}m²'.format(L, al, m2))
print('Para pintar sua parede, você precisa de {}l de tinta.'.format(m2 / 2))
