package org.example;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {

        List<Integer> dados = new ArrayList<>(List.of(3, 5, 16, 18, 19, 10, 155, 16, 166, 17));

        // Criando objeto com construtor que já calcula tudo
        Estatistica estatistica = new Estatistica(dados);

        // Exibindo todos os resultados
        estatistica.exibeTudo();


    }
}