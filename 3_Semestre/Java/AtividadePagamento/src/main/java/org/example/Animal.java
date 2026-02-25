package org.example;

public class Animal {

    private String especie;

    public String getEspecie() {
        return especie;
    }

    public Animal(String especie) {
        this.especie =  especie;
    }

    public void EmitirSom() {
        System.out.println("O animal emite um som.");
    }

}
