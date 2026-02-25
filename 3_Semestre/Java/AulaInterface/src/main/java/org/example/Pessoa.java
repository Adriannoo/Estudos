package org.example;
public class Pessoa implements IPessoa {
    private String nome;
    private String status;

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }

    public void setStatus(String status) {
        this.status = status;
    }
    public String getStatus() {
        return status;
    }

    @Override
    public String salvar(Pessoa pessoa) {
        if (pessoa == null) {
            throw new RuntimeException();
        }
        if (pessoa.nome == null) {
            throw new RuntimeException();
        }
        return pessoa.toString();
    }

    @Override
    public String alterarStatus(String status) {
        if (!status.equalsIgnoreCase(this.status)) {
            this.status = Status.ATIVO.toString();
        } else {
            this.status = Status.INATIVO.toString();
        }
        return "Atualizado para " + this.status;
    }

    @Override
    public String toString() {
        return "Pessoa {" + "nome='" + nome + ", status='" + status + "'}";
    }
}


