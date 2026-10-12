matriz = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
# Muito importante estudar essa estrutura!
# for para alimentação:
for l in range(0, 3):
    for c in range(0, 3):
        matriz[l][c] = int(input(f'Digite um valor para [{l}, {c}]: '))
print('—' * 32)
# for para estrutura:
for l in range(0, 3):
    for c in range(0, 3):
        print(f'[{matriz[l][c]:^5}]', end='')
    print()
# Fiz na pressa, revisar amanhã essa atividade!