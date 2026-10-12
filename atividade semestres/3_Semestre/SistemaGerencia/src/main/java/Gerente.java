public class Gerente extends Funcionario {
    public Gerente(String nome, String cpf, double salarioBase) {
        super(nome, cpf, salarioBase);
    }

    @Override
    public double calcularSalario() {
        // Gerente recebe um adicional de 20% sobre o salario base
        return getSalarioBase() + (getSalarioBase() * 0.20);
    }

    @Override
    public String getCargo() {
        return "Gerente";
    }
}
