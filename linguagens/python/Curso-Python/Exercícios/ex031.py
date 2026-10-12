print('—'*20)
dist = int(input('Qual a distância da sua viagem ? \n'))
print('Você está prestes a começar uma viagem de {}Km'.format(dist))
'''if dist <= 200:
    print('O custo da sua passagem será de {:.2f} !'.format(dist*0.50))
else:
    print('O custo da sua passagem será de {:.2f}'.format(dist*0.45))'''
p = dist * 0.50 if dist <= 200 else dist * 0.45
print('O preço da sua passagem será de {}R$'.format(p))
print('—'*20)
