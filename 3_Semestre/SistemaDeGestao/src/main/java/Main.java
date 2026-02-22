import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Criacao do scanner para leitura de entrada do usuario
        Scanner sc = new Scanner(System.in);
        int escolha = -1; // Variavel iniciada com -1 para entrar no loop

        // Criacao das vagas
        ArrayList<Vaga> vagas = new ArrayList<>();
        for (int i = 1; i <= 5; i++) {
            vagas.add(new Vaga(i));
        }

        while (escolha != 0 ) {
            System.out.println("\n===== MENU =====");
            System.out.println("1 - Listar vagas");
            System.out.println("2 - Ocupar vaga");
            System.out.println("3 - Liberar vaga");
            System.out.println("0 - Sair");
            System.out.print("Escolha: ");
            escolha = sc.nextInt();
            sc.nextLine(); // Limpa o buffer

            switch(escolha) {
                case 1:
                    // Listar Vagas
                    System.out.print("\nVagas disponiveis: \n");
                    for (Vaga vaga : vagas) {
                        System.out.println(vaga);
                    }
                    break;

                case 2:
                    // Ocupar vagas
                    System.out.println("\nQue vaga deseja ocupar?\n");
                    escolha = sc.nextInt(); // Metodo do Scanner para ler um numero inteiro
                    sc.nextLine(); // Limpa o buffer do scanner

                    if (escolha >= 1 && escolha <= vagas.size()) {
                        Vaga vagaEscolhida = vagas.get(escolha - 1);

                        System.out.printf("%nDigite a placa: ");
                        String placa = sc.nextLine();

                        if (vagaEscolhida.ocupar(placa)) {
                            System.out.println("Vaga ocupada com sucesso!");

                        } else {
                            System.out.println("Essa vaga ja esta ocupada!");
                        }
                    } else if (escolha != 0) {
                        System.out.println("Numero de vaga invalido!");
                    }
                    break;

                case 3:
                    // Liberar Vagas
                    System.out.println("Que vaga deseja liberar?\n");
                    int liberar = sc.nextInt();
                    sc.nextLine();

                    if (liberar >= 1 && liberar <= vagas.size()) {
                        vagas.get(liberar - 1).liberar();
                        System.out.println("Vaga liberada!");
                    } else {
                        System.out.println("Número inválido!");
                    }
                    break;

                case 0:
                    System.out.println("Encerrando sistema...");
                    break;

                default:
                    System.out.println("Opção inválida!");

            }
        }
    }
}
