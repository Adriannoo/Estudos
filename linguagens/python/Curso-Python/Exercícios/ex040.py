print('—'*16)
n1 = float(input('Primeira nota = '))
n2 = float(input('Segunda nota = '))
média = (n1 + n2)/2
print('A média do aluno foi de {:.1f} !'.format(média))
if média >= 7:
    print('O aluno foi Aprovado !')
elif 7 > média >= 5:
    print('O aluno ficou de Recuperação !')
elif média < 5:
    print('O aluno foi Reprovado !')
print('—'*16)
