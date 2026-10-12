palavras = ('fartal', 'fespop', 'coco', 'calças', 'ows', 'gursebump', 'evirtaime', 'fifa', 'balão', 'pipa', 'ovo')
for p in palavras:
    print(f'\nNa palavra {p.upper()} temos = ', end='')
    for letra in p:
        if letra.lower() in 'aeiou':
            print(letra, end='')
