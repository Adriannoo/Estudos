import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        System.out.println("\n--- Calculadora ---");
        System.out.println("Digite 2 Numeros ");
        System.out.print("Numero 1: ");
        double num1 = sc.nextDouble();
        System.out.print("Numero 2: ");
        double num2 = sc.nextDouble();

        System.out.print("\nEscolha uma Opcao\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
        int opcao = sc.nextInt();
        sc.nextLine();

        switch (opcao) {
            case 1:
                System.out.printf("\nA soma dos numeros e: %.2f\n", Calculadora.somar(num1, num2));
                break;
            case 2:
                System.out.printf("\nA subtracao dos numeros e: %.2f\n", Calculadora.subtrair(num1, num2));
                break;
            case 3:
                System.out.printf("\nA multiplicacao dos numeros e: %.2f\n", Calculadora.multiplicar(num1, num2));
                break;
            case 4:
                System.out.printf("\nA divisao dos numeros e: %.2f\n", Calculadora.dividir(num1, num2));
                break;
            default:
                System.out.println("Opção Inválida!");
                break;
        }
    }
}
