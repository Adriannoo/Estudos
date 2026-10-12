# Lista dentro de listas
''' lista = [['Pedro', 18], ['Rogério', 43], ['Lucas', 23]]
print(lista[0][0])
print(lista[1][1])
print(lista[0][1])
print(lista[2][0])
print(lista[0])
for p in lista:
    print(f'{p[0]} tem {p[1]} anos de idade!')'''
galera = list()
dado = list()
totmaior = totmenor = 0
for c in range(0, 3):
    dado.append(str(input('Nome: ')).strip())
    dado.append(int(input('Idade: ')))
    galera.append(dado[:]) #Importante criar cópia da lista!
    dado.clear()
    # Mostrar pessoas com mais de 21 anos:
for p in galera:
    if p[1] >= 21:
        print(f'{p[0]} é maior de idade!')
        totmaior += 1
    else:
        print(f'{p[0]} é menor de idade!')
        totmenor += 1
print(f'Temos {totmaior} pessoas maiores de idade, e {totmenor} pessoas menores de idade!')
