try:
    a = int(input('Numerador: '))
    b = int(input('Denominador: '))
    r = a / b

# Posso usar vários 'except' em um 'try'    
except Exception as erro:
    print(f'Tivemos um problema, o erro foi {erro.__class__}')

except(ValueError, TypeError):
    print('Tivemos um problema com os tipos de dados que você digitou.')

except(ZeroDivisionError):
    print('Não é possível dividir um número por zero.')

except(KeyboardInterrupt):
    print('O usuário não informou dados!')

else:
    print(f'O resultado é {r:.1f}')

finally:
    print('Volte sempre!')

print()