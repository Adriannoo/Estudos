# Faça um programa que tenha uma função notas() que pode receber várias notas de alunos
# E vai retornar um dicionário com as seguintes informações:
# – Quantidade de notas;
# – A maior nota;
# – A menor nota;
# – A média da;
# – A situação (opcional).

def notas(*notas, situação=False):
    dados = dict()
    dados['Total'] = len(notas)
    dados['Maior'] = max(notas)
    dados['Menor'] = min(notas)
    dados['Média'] = sum(notas) / len(notas)

    if situação:
        if dados['Média'] >= 7:
            dados['Situação'] = 'BOA'

        elif dados['Média'] >= 5:
            dados['Situação'] = 'MÉDIA'

        else:
            dados['Situação'] = 'RUIM'

    return dados


notas = notas(8.5, 5.5, 7.2, situação=True)
print(notas)
