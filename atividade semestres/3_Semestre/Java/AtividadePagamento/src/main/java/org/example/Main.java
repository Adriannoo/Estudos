package org.example;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Pix pagamento1 = new Pix(100, "020.435.123-90");
        CartaoDeCredito pagamento2 = new CartaoDeCredito(100, 2);

        pagamento1.processarPagamento();
        pagamento2.processarPagamento();

        Animal pedro = new Animal();
        pedro.EmitirSom();

        Cachorro cachorro = new Cachorro("Canis lupus familiaris");
        cachorro.EmitirSom();
    }
}
