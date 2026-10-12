def aumentar(n=0, taxa=0, formato=False):
    res = n + (n * taxa / 100)
    return res if formato is False else moeda(res)


def diminuir(n=0, taxa=0, formato=False):
    res = n - (n * taxa / 100)
    return res if formato is False else moeda(res)


def dobro(n=0, formato=False):
    res = n * 2
    return res if not formato else moeda(res)

def metade(n=0, formato=False):
    res = n / 2
    return res if not formato else moeda(res)


def moeda(n=0, moeda='R$'):
    return f'{moeda}{n:.2f}'.replace('.', ',')


def resumo(n=0, taxa_a=0, taxa_b=0):
    print('—' * 30)
    print('RESUMO DO VALOR'.center(30))
    print('—' * 30)
    print(f'Preço analisado: {moeda(n)}')
    print(f'Dobro do preço:  {dobro(n, True)}')
    print(f'Metade do preço: {metade(n, True)}')
    print(f'Aumento de {taxa_a}%:  {aumentar(n, taxa_a, True)}')
    print(f'{taxa_b}% de redução:  {diminuir(n, taxa_b, True)}')
    print('—' * 30)