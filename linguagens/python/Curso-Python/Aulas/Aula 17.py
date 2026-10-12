'''num = [2, 4, 8, 10]
# lista é mutavel
num[2] = 12

# .append adiciona
num.append(18)

# .sort coloca em ordem
num.sort()

# reverse=True para inverter
num.sort(reverse=True)

# .insert para inserir
num.insert(3, 80)

#.pop para remover, se parênteses vazio ele remove o último valor!
# num.pop()
num.pop(2)

# remove procura o primeiro elemento, e remove!
num.remove(12)
print(num)
print(f'Essa lista tem {len(num)} elementos.')'''

'''valores = list()
for cont in range(0, 5):
    valores.append(int(input('Digite um valor = ')))
# valores.append(5)
# valores.append(2)
# valores.append(10)

for c, v in enumerate(valores):
    print(f'Na posição {c} encontrei o valor {v}!')
print('Cheguei no final da lista!')'''

# Importante lembrar isso!
a = [4, 2, 1, 9]
# Ligação =
# b = a
# Cópia = 
b = a[:]
b[2] = 8
print(f'Lista A = {a}')
print(f'Lista B = {b}')
