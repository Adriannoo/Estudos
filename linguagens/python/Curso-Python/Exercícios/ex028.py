from random import randint
from time import sleep
print('—'*42)
pc = randint(0, 5)
num = int(input('Digite um número entre 0 e 5 e eu irei dizer se é o mesmo número que eu estou pensando ou não ↓ \n'))
print('—'*42)
print('Pensando . . .')
sleep(2)
if num == pc:
    print('Correto, esse era o número !')
else:
    print('Errado, eu pensei no número {}. Tente novamente !'.format(pc))
