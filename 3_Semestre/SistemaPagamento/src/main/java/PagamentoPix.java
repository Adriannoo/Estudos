public class PagamentoPix implements TipoPagamentoInterface {

    @Override
    public void processarPagamento(double valor) {
        System.out.println("Pagamento por Pix no valor de: " + valor);
    }
}
