// Biblioteca ArrayList, que permite criar listas dinamicas de objetos
import javax.sound.midi.Soundbank;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Arrays normal, tem tamanhos fixos, ArrayList tem tamanhos dinamicos
        ArrayList<Funcionario> lista = new ArrayList<>();
        lista.add(new FuncionarioCLT("Jose da Silva", "123.456.678-53", 1500.00));
        lista.add(new Gerente("Daniel Bueno Vorcaro", "987.654.321-00", 5000.00));
        lista.add(new Desenvolvedor("Jeffrey Trump", "512.612.320-43", 2000, 100));

        // for-each para percorrer a lista
        for(Funcionario f : lista) {
            System.out.println("\nCargo: " + f.getCargo());
            f.exibirDados();
        }
        System.out.println("\n=================================================");
        System.out.println("\t\t\t\t   Adicionais");
        System.out.println("Gerente: 20% a mais do salario base");
        System.out.println("Desenvolvedor: R$ 100,00 - Bonus de produtividade");
        System.out.println("=================================================");

        // Utilizando o metodo de aumentar salario fora do Array
        Funcionario funcionario = lista.get(0);
        System.out.println("\n= Funcionario CLT Promovido =");
        funcionario.exibirDados();
        // Aumento de 300% do salário
        funcionario.aumentarSalario(300);
        System.out.print("Novo Salário: " + funcionario.getSalarioBase());
        funcionario.exibirDadosSimplificados();
    }
}
