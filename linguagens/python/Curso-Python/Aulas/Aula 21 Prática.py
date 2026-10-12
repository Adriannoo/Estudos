
# Fatorial

def fatorial(num=1):
    f = 1
    for c in range(num, 0, -1):
        f *= c
    return f


n = int(input('Digite um número: '))

print(f'O fatorial de {n} é de {fatorial(n)}'), print()

# Pár ou ímpar

def par(num = 0):
    if num % 2 == 0:
        return True
    else:
        return False


n = int(input('Digite um número: '))

if par(n):
    print('O número é pár.')
else:
    print('O número é ímpar.')

print()