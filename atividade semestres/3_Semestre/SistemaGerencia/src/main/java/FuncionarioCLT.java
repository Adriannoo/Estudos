public class FuncionarioCLT extends Funcionario {
    public FuncionarioCLT(String nome, String cpf, double salarioBase) {
        // Chama o construtor da classe pai herdado da classe Funcionario com o metodo "super"
        super(nome, cpf, salarioBase);
    }

    // Utilizacao da anotacao "@override" para indicar que estou sobrescrevendo um metodo da classe pai
    // Criando uma nova implementacao.
    @Override
    public double calcularSalario() {
        return getSalarioBase();
    }

    @Override
    public String getCargo() {
        return "Funcionario CLT";
    }
}
