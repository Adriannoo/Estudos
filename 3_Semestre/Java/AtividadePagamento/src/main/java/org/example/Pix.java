package org.example;

public class Pix extends Pagamento {

    private String chavePix;

    Pix(double valor, String chavePix) {
        super(valor);
        this.chavePix = chavePix;
    }

    @Override
    public void processarPagamento() {
        System.out.printf("Valor do pagamento: R$%.2f, Chave Pix: %s\n", this.getValor(), this.chavePix);
    }
}
