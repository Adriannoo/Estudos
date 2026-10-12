#include <stdio.h>
#include <stdlib.h>

void menuPrincipal(void);
void menuDepositar(void);
void menuSacar(void);
void menuSaldo(void);
void menuSair(void);
float saldoTotal = 2343;

int main() {
    menuPrincipal();
}

void menuPrincipal(){
    int opcaoMenup;
    opcaoMenup = 0;
    printf("\n Bem vindo ao banco do ronardo\n");
    printf("   1 - Depositar \n");
    printf("   2 - Sacar\n");
    printf("   3 - Consultar saldo\n");
    printf("   4 - Sair\n");
    printf("   Escolha uma opcao:");
    scanf("%d",&opcaoMenup);

    switch(opcaoMenup)
    {
        case 1: menuDepositar(); break;
        case 2: menuSacar(); break;
        case 3: menuSaldo(); break;
        case 4: menuSair(); break;
        default: printf("Opcao invalida... tente novamente\n"); menuPrincipal(); break;
    }
}

void menuDepositar(){
    float valorDeposito;
     printf("\n Banco do ronardo\n");
     printf("\n Insira o valor que desejar depositar\n");
     printf("\n O valor maximo de deposito e 5000 reais\n");
     scanf("%f",&valorDeposito);
     if (valorDeposito  < 10)
        {
            printf("O valor mínimo de deposito e 10 reais");
            menuDepositar();
        }
        else if (valorDeposito >10 && valorDeposito <= 5000){
            printf(" O deposito no valor de %.2f reais foi realizado", valorDeposito);
            saldoTotal += valorDeposito;
            menuPrincipal();
            }
        else {printf("O valor maximo de deposito e 5000 Reais\n"); menuDepositar();}
}

void menuSacar(){
    float valorSaque;
     printf("\n Banco do ronardo\n");
     printf("\n Insira o valor que desejar sacar\n");
     printf("\n O valor maximo de saque e 5000 reais\n");
     scanf("%f",&valorSaque);
     if (valorSaque  > saldoTotal )
        {
            printf("Saldo insuficiente\n");
            printf("Tente novamente\n");
            menuPrincipal();
        }
        else if (valorSaque > 10 && valorSaque <= 5000){
            printf(" O saque no valor de %.2f reais foi realizado\n", valorSaque);
            saldoTotal -= valorSaque;
            menuPrincipal();

        }
        else if ( valorSaque < 10){
                printf("O valor mínimo de saque 10 reais");
                menuSacar();
        }
        else {printf("O valor maximo de saque e 5000 reais\n"); menuSacar();}
}

void menuSaldo() {
    int cSaldo;
    printf("\n Banco do ronardo\n");
    printf("Saldo: %.2f \n", saldoTotal);
    printf("Deseja voltar ao menu principal?\n");
    printf(" 1- SIM\n");
    scanf("%d",&cSaldo);
    switch(cSaldo){
    case 1: menuPrincipal(); break;
    default: printf("Opcao invalida.. tente novamente\n"); menuSaldo(); break;}
  }

void menuSair()
{
    printf("Saindo...\n");
    exit(0);
}

