package org.example;

public class Cachorro extends Animal {

    public Cachorro(String especie) {
        super(especie);
    }

    @Override
    public void EmitirSom() {
        System.out.println("O cachorro late: Au Au!");
    }
}
