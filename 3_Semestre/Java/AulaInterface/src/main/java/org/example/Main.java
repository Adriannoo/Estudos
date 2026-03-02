package org.example;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Pessoa p1 = new Pessoa();
        Pessoa p2 = new Pessoa();

        p1.setNome("Bostelao");
        p1.setStatus(Status.ATIVO.toString());
        System.out.println(p1.toString());

        p2.setStatus(Status.ATIVO.toString());
        try {
            p2.salvar(p2);
        } catch (RuntimeException exception) {
            System.out.println("Erro: " + exception);
        }
        System.out.println(p2.toString());

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero: ");

        try {
            int numero = sc.nextInt();
        } catch (InputMismatchException exception) {
            System.out.println("Erro de INPUT: " + exception);
        }
    }
}
