print('—'*24)
velocidade = int(input('Qual a velocidade atual do carro ? \n'))
print('—'*24)
multa = (velocidade-80)*7
if velocidade >= 80:
    print('Você foi MULTADO ! Você exedeu o limite de velocidade permitido,'
          ' que é 80km/h você deve pagar uma multa de {:.2f}R$'.format(multa))
print('Ok, Tenha um bom dia !')
