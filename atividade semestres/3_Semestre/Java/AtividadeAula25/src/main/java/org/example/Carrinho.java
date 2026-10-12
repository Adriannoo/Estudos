package org.example;

import java.util.ArrayList;

public class Carrinho {
    private ArrayList<Produto> produtos;
    private Restaurante restaurante;

    public Carrinho(Restaurante restaurante) {
        this.restaurante = restaurante;
        this.produtos = new ArrayList<>();
    }

    public void adicionarProduto(Produto produto) {
        produtos.add(produto);
    }

    public void removerProduto(Produto produto) {
        produtos.remove(produto);
    }

    public double calcularTotal() {
        double total = 0.0;
        for (Produto produto : produtos) {
            total += produto.getPreco();
        }
        return total;
    }
}
