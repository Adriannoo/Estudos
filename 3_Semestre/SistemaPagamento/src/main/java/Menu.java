import java.util.Scanner;

public class Menu {
    Scanner sc = new Scanner(System.in);
    int opcao;
    TipoPagamentoEnum tipoPagamento = null;
    TipoPagamentoInterface interfacePagamento = null;
    double valorAPagar;

    public void menuPrincipal() {
        System.out.println("*****************************************");
        System.out.println(" === === MENU PAGAMENTO === ===");
        System.out.println("1 - Pagamento por PIX");
        System.out.println("2 - Pagamento por BOLETO");
        System.out.println("3 - Pagamento por CARTAO");
        System.out.print("Opcao: ");
        opcao = sc.nextInt();

        switch (opcao) {
            case 1:
                System.out.print("Digite o valor para pagamento: ");
                valorAPagar = sc.nextDouble();
                tipoPagamento = TipoPagamentoEnum.PIX;
                break;
            case 2:
                System.out.print("Digite o valor para pagamento: ");
                valorAPagar = sc.nextDouble();
                tipoPagamento = TipoPagamentoEnum.BOLETO;
                break;
            case 3:
                System.out.print("Digite o valor para pagamento: ");
                valorAPagar = sc.nextDouble();
                tipoPagamento = TipoPagamentoEnum.CARTAO;
                break;
            default:
                System.out.println("ERRO!");
                break;
        }

        switch (tipoPagamento) {
            case PIX:
                interfacePagamento = new PagamentoPix();
                interfacePagamento.processarPagamento(valorAPagar);
                break;
            case BOLETO:
                interfacePagamento = new PagamentoBoleto();
                interfacePagamento.processarPagamento(valorAPagar);
                break;
            case CARTAO:
                interfacePagamento = new PagamentoCartao();
                interfacePagamento.processarPagamento(valorAPagar);
                break;
        }

    }
}
