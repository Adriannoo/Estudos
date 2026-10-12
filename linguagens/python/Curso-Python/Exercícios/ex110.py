import pacotes.moeda as moeda
import pacotes.dado as dado 

p = dado.leiaDinheiro('Digite um preço: R$')
moeda.resumo(p, 20, 12)
print()
