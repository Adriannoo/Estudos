public class PagamentoBoleto implements TipoPagamentoInterface {

    @Override
    public void processarPagamento(double valor) {
        System.out.println("Pagamento por Boleto no valor de: " + valor);
    }
}
