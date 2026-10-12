public class PagamentoCartao implements TipoPagamentoInterface {

    @Override
    public void processarPagamento(double valor) {
        System.out.println("Pagamento por Cartao no valor de: " + valor);
   }
}
