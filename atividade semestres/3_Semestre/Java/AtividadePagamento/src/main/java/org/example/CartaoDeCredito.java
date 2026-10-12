package org.example;

public class CartaoDeCredito extends Pagamento {
    private int parcelas;

    CartaoDeCredito(double valor, int parcelas) {
        super(valor);
        this.parcelas = parcelas;
    }

    @Override
    public void processarPagamento() {
        System.out.printf("Valor do pagamento: R$%.2f, Parcelas: %d\n", this.getValor(), this.parcelas);
    }

}
