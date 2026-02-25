package org.example;

import java.util.List;

public class Estatistica {
    private List<Integer> dados;
    private Double media;
    private Integer maximo;
    private Integer minimo;
    private Double desvio;

    // Construtor
    public Estatistica(List<Integer> dados) {
        this.dados = dados;
        this.calcular();
    }

    // Método para calcular tudo
    private void calcular() {
        calcularMaximo();
        calcularMinimo();
        calcularMedia();
        calcularDesvio();
    }

    // Calcular máximo
    private void calcularMaximo() {
        this.maximo = 0;
        for (int valor : dados) {
            if (valor > maximo) {
                maximo = valor;
            }
        }
    }

    // Calcular mínimo
    private void calcularMinimo() {
        this.minimo = dados.get(0);
        for (int valor : dados) {
            if (valor < minimo) {
                minimo = valor;
            }
        }
    }

    // Calcular média
    private void calcularMedia() {
        double soma = 0;
        for (int valor : dados) {
            soma += valor;
        }
        this.media = soma / dados.size();
    }

    // Calcular desvio padrão
    private void calcularDesvio() {
        double soma = 0;
        for (int valor : dados) {
            soma += Math.pow(valor - media, 2);
        }
        this.desvio = Math.sqrt(soma / dados.size());
    }

    // Setters
    public void setDados(List<Integer> dados) {
        this.dados = dados;
        this.calcular();
    }

    // Getters
    public Double getMedia() {
        return media;
    }

    public Integer getMaximo() {
        return maximo;
    }

    public Integer getMinimo() {
        return minimo;
    }

    public Double getDesvio() {
        return desvio;
    }

    // Funções de exibição
    public void exibeMedia() {
        System.out.println("Média é: " + media);
    }

    public void exibedesvioPadrao() {
        System.out.println("Desvio padrão é: " + desvio);
    }

    public void exibeMaximo() {
        System.out.println("Máximo é: " + maximo);
    }

    public void exibeMinimo() {
        System.out.println("Mínimo é: " + minimo);
    }

    public void exibeTudo() {
        System.out.println("=== Estatísticas ===");
        exibeMaximo();
        exibeMinimo();
        exibeMedia();
        exibedesvioPadrao();
    }
}
