public class FuncionarioCLT extends Funcionario {
    public FuncionarioCLT(String nome, String cpf, double salarioBase) {
        // Chama o construtor da classe pai herdado da classe Funcionario com o metodo "super"
        super(nome, cpf, salarioBase);
    }

    // Estou sobrescrevendo o metodo "pai" para calcular o salario do CLT
    // Por isso da utilizacao da anotacao "@override" para indicar que estou sobrescrevendo um metodo da classe pai
    // Criando uma nova implementacao
    @Override
    public double calcularSalario() {
        return getSalarioBase();
    }
}
