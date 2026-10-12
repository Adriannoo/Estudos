import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Dados de Entrada
        int[] ListaDeNumeros = {5, 99, 42, 17, 63, 8, 74, 29, 91, 12, 56, 3, 88, 34, 70};
        int MaiorNumero = ListaDeNumeros[0], MenorNumero = ListaDeNumeros[0];
        float Media = 0, Mediana = 0;

        for (int i = 0; i < ListaDeNumeros.length; i++) {
            // Comparação do Maior número
            if (MaiorNumero < ListaDeNumeros[i]) {
                MaiorNumero = ListaDeNumeros[i];
            }
            // Comparação do Menor número
            if (MenorNumero > ListaDeNumeros[i]) {
                MenorNumero = ListaDeNumeros[i];
            }
            // Cálculo da Média
            Media += ListaDeNumeros[i];
        }
        // IMPRIMA:
        // 1) Mostre o MENOR número do vetor
        // 2) Mostre o MAIOR número do vetor
        // 3) Calcule a MÉDIA (soma de todos / quantidade de elementos)

        System.out.printf("Menor numero: %d%n", MenorNumero);
        System.out.printf("Maior numero: %d%n", MaiorNumero);
        System.out.printf("Media: %.2f%n", Media / ListaDeNumeros.length);

        // EXTRA:
        // 4) Calcule a MEDIANA
        // - Ordene o vetor em ordem crescente
        // - Se tiver quantidade ÍMPAR: mediana = elemento do meio
        // - Se tiver quantidade PAR: mediana = (dois elementos do meio) / 2

        // Utilização do Bubble Sort para ordenar o vetor
        // a cada iteração, o maior valor vai para o final do vetor
        for (int i = 0; i < ListaDeNumeros.length - 1; i++) {
            for (int j = 0; j < ListaDeNumeros.length - 1; j++) {
                if (ListaDeNumeros[j] > ListaDeNumeros[j + 1]) {
                    int temp = ListaDeNumeros[j];
                    ListaDeNumeros[j] = ListaDeNumeros[j + 1];
                    ListaDeNumeros[j + 1] = temp;
                }
            }
        }

        System.out.printf("%nVetor ordenado: ");

        // Utilização do "for-each" para imprimir o vetor ordenado
        for (int listaDeNumero : ListaDeNumeros) {
            System.out.printf("%d ", listaDeNumero);
        }

        // Descobrir se o vetor é par ou ímpar, com a funcao criada abaixo
        System.out.printf("%nDescobrir se o vetor e par ou impar:%n");
        System.out.printf("0 = par.%n1 = impar%nResposta: %d%n", parOuImpar(ListaDeNumeros));

        System.out.printf("%nA mediana e o valor central de um conjunto ordenado; quando a quantidade de elementos e par, ela e a media aritmetica dos dois valores centrais.%nPortanto, a mediana do nosso vetor impar e:");
        double medianaImpar = (ListaDeNumeros[ListaDeNumeros.length / 2]);
        System.out.printf(" %.0f%n%n", medianaImpar);

        // Para nao utilizar uma funcao para copiar o vetor, vou criar um novo com um elemento a mais rapidamente
        int[] novoVetor = {3, 5, 8, 12, 17, 29, 34, 42, 56, 63, 70, 74, 82, 88, 91, 99};

        System.out.printf("Novo vetor:%n");
        for (int listaDeNumero : novoVetor) {
            System.out.printf("%d ", listaDeNumero);
        }

        // Descobrir se o vetor é par ou ímpar, com a funcao criada abaixo
        System.out.printf("%nDescobrir se o vetor e par ou impar:%n");
        System.out.printf("0 = par.%n1 = impar%nResposta: %d%n", parOuImpar(novoVetor));

        // Calculo da mediana do vetor par, que e a media aritmetica dos dois valores centrais
        double medianaPar = (novoVetor[(novoVetor.length / 2) - 1] + novoVetor[novoVetor.length / 2]) / 2.0;
        System.out.printf("%nComo o vetor e par, a mediana e igual a: ");
        System.out.printf("%.2f%n", medianaPar);

    }

    // Funcao int que recebe um vetor e retorna 0 se for par ou 1 se for impar
    static int parOuImpar(int[] vetor) {
        return vetor.length % 2 == 0 ? 0 : 1;
    }
}
