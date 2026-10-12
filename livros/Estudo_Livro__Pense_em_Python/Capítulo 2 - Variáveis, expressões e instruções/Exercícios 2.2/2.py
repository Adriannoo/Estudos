# 2. Suponha que o preço de capa de um livro seja R$ 24,95, mas as livrarias
# recebem um desconto de 40%. O transporte custa R$ 3,00 para o primeiro
# exemplar e 75 centavos para cada exemplar adicional. Qual é o custo total
# de atacado para 60 cópias?

preço = 24.95 * 40 / 100

atacado = 60 * preço + 3 

final = 59 * 0.75 + atacado

print(f'{final:.2f}')