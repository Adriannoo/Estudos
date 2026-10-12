public abstract class Funcionario {
    private String nome;
    private String cpf;
    private double salarioBase;

    // Construtor
    public Funcionario(String nome, String cpf, double salarioBase) {
        this.nome = nome;
        this.cpf = cpf;
        //this.salarioBase = salarioBase;
        // Utilizo o metodo de validacao no construtor para garantir que o salario base seja validado desde a criacao do objeto
        // impedindo que um funcionario seja criado com um salario base negativo
        setSalarioBase(salarioBase);
    }

    // Getters e Setters
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getCpf() {
        return cpf;
    }

    // Validação no Método para impedir salário base negativo
    public void setSalarioBase(double salarioBase) {
        if (salarioBase < 0) {
            // Do pacote .lang, lanca uma excecao para indicar que o salario base nao pode ser negativo
            // Ille joga o erro na tela, parando a execucao do programa
            // "throw" - lanca o erro; "IlleArgExc" - Argumento invalido
            throw new IllegalArgumentException("ERRO! Salário base não pode ser negativo!");
        }
        this.salarioBase = salarioBase;
    }

    public double getSalarioBase() {
        return salarioBase;
    }

    // Metodo abstrato, que vai utilizar o polimorfismo para calcular o salario de cada tipo de funcionario
    public abstract double calcularSalario();

    public void aumentarSalario(double percentual) {
        if (percentual < 0) {
            throw new IllegalArgumentException("ERRO! Percentual de aumento não pode ser negativo!");
        }
        salarioBase += salarioBase * (percentual / 100);
    }

    // Funcao que retorna a "classe", e simpleName retorna apenas o nome da classe
    public String getCargo() {
        return this.getClass().getSimpleName();
    }

    public void exibirDados() {
        System.out.print("-----------------------------\n");
        System.out.printf("Nome: %s\nCPF: %s\nSalario Base: R$ %.2f\nSalario Final: R$ %.2f\n", nome, cpf, salarioBase, calcularSalario());
        System.out.print("-----------------------------\n");
    }

    public void exibirDadosSimplificados() {
        System.out.print("\n-----------------------------\n");
        System.out.printf("Nome: %s\nSalario Final: R$ %.2f\n", nome, calcularSalario());
        System.out.print("-----------------------------\n");
    }
}