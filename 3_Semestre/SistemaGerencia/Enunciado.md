Criar um sistema simples para gerenciar diferentes tipos de funcionários de uma empresa, aplicando os conceitos de Programação Orientada a Objetos: encapsulamento, herança, polimorfismo e classe abstrata.

Descrição do Problema:
Uma empresa possui três tipos de funcionários:

Funcionário comum (CLT)
Gerente
Desenvolvedor

Todos os funcionários devem herdar de uma classe abstrata chamada Funcionario.

Classe Abstrata: Funcionario

Atributos privados (encapsulados):
nome
cpf
salarioBase

Métodos:
Construtor para inicializar os atributos
Getters e setters (com validação para impedir salário negativo)
Método abstrato: calcularSalario() que retorna double
Método concreto: exibirDados() para mostrar nome, CPF, salário base e salário final

Regras de cálculo do salário:

FuncionarioCLT:
Recebe apenas o salário base.
Deve sobrescrever o método calcularSalario() retornando salarioBase.

Gerente:
Recebe salário base mais 20% de bônus.
Fórmula: salarioBase + (salarioBase * 0.20)
Deve sobrescrever calcularSalario().

Desenvolvedor:
Possui um atributo adicional chamado adicionalProdutividade.
Recebe salário base mais o adicional de produtividade.
Fórmula: salarioBase + adicionalProdutividade
Deve sobrescrever calcularSalario().

Polimorfismo

No método main:
Criar uma lista do tipo Funcionario (por exemplo, ArrayList<Funcionario>).
Adicionar objetos dos três tipos CLT, Gerente, Desenvolvedor.
Percorrer a lista chamando o método exibirDados().

O método calcularSalario() será executado de forma diferente para cada tipo de funcionário, demonstrando polimorfismo.

Requisitos adicionais

Criar um método aumentarSalario(double percentual) na classe Funcionario.

O exercício deve demonstrar claramente:

Encapsulamento: atributos privados e validações.
Herança: classes CLT, Gerente e Desenvolvedor herdando de Funcionario.
Polimorfismo: sobrescrita do método calcularSalario().
Abstração: impossibilidade de instanciar diretamente a classe Funcionario.