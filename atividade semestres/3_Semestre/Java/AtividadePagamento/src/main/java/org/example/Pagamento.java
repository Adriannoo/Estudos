package org.example;

import javax.swing.table.TableRowSorter;

public abstract class Pagamento {
    private final double valor;

    public Pagamento(double valor) {
        this.valor = valor;
    }

    public abstract void processarPagamento();

    public double getValor() {
        return this.valor;
    }
}
