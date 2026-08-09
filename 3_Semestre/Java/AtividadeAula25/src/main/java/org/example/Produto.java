package org.example;

public class Produto {
    private String nome;
    private double preco;
    private Restaurante restaurante;

    public Produto(String nome, double preco, Restaurante restaurante) {
        this.nome = nome;
        this.preco = preco;
        this.restaurante = restaurante;
    }

    public String getNome() {
        return nome;
    }

    public double getPreco() {
        return preco;
    }

    public Restaurante getRestaurante() {
        return restaurante;
    }
}
