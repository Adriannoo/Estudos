dados = list()

while True:
    nome = str(input('Nome: ')).strip().title()
    nota1 = float(input('Nota 1: '))
    nota2 = float(input('Nota 2: '))
    média = (nota1 + nota2) / 2

    dados.append([nome, nota1, nota2, média])

    op = str(input('Quer continuar? [S/N] ')).strip().upper()[0]

    if op == 'N':
        break

print('—' * 32)

print(f'{"No.":<5}{"NOME":<10}{"MÉDIA":>15}')

for p in enumerate (dados):
    print(f'{p[0]:<4} {p[1][0]:<10}   {p[1][3]:>10.1f}')

print('—' * 32)

while True:
    op2 = int(input('Quer mostrar as notas de qual aluno? (999 interrompe) '))

    if op2 == 999:
        print('Finalizando...')
        break

    if op2 <= len(dados) - 1:
        print(f'Notas de {dados[op2][0]} são {dados[op2][1]} — {dados[op2][2]}')

print('—' * 6,'Volte Sempre', '—' * 6)

# CRTL + ; coloca em comentario!