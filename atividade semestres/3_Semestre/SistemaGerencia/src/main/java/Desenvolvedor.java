public class Desenvolvedor extends Funcionario {
    public Desenvolvedor(String nome, String cpf, double salarioBase, double adicionalProdutividade) {
        super(nome, cpf, salarioBase);
        this.adicionalProdutividade = adicionalProdutividade;
    }

    private double adicionalProdutividade;

    public double getAdicionalProdutividade() {
        return adicionalProdutividade;
    }

    public void setAdicionalProdutividade(double adicionalProdutividade) {
        if (adicionalProdutividade < 0) {
            throw new IllegalArgumentException("ERRO! Adicional de produtividade não pode ser negativo!");
        }
        this.adicionalProdutividade = adicionalProdutividade;
    }

    @Override
    public double calcularSalario() {
        // Desenvolvedor recebe um adicional de produtividade.
        return getSalarioBase() + adicionalProdutividade;
    }

    @Override
    public String getCargo() {
        return "Desenvolvedor";
    }
}
