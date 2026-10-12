peso = float(input('Qual o seu peso (Kg) ? \n'))
altura = float(input('Qual a sua altura (m) ? \n'))
imc = peso / (altura ** 2)
print('O seu imc é de = {:.1f}'.format(imc))
if imc < 18.5:
    print('Você está abaixo do peso !')
elif imc <= 18.5 < 25:
    print('Você está com o peso ideal !')
elif imc <= 25.0 < 30:
    print('Você está Sobrepeso !')
elif imc <= 30.0 < 40:
    print('Você está com Obesidade !')
else:
    print('Você está em Obesidade Mórbida, cuidado !')
