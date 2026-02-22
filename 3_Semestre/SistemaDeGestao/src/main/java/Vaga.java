public class Vaga {
    private int numero;
    private String placa;
    private boolean ocupada;

    // Construtor
    public Vaga(int numero) {
        this.numero = numero;
        this.placa = null;
        this.ocupada = false;
    }

    // Getters
    public int getNumero() {
        return numero;
    }
    public String getPlaca() {
        return placa;
    }
    public boolean isOcupada() {
        return ocupada;
    }

    // Setters
    public void setPlaca(String placa) {
        this.placa = placa;
    }
    public void setOcupada(boolean ocupada) {
        this.ocupada = ocupada;
    }
    public void setNumero(int numero) {
        this.numero = numero;
    }

    // Sobrescreve o metodo toString para exibir as informacoes da vaga
    @Override
    public String toString() {
        if (isOcupada()) {
           return "Vaga: " + getNumero() + " Ocupada por placa: " + getPlaca();
        } else {
            return "Vaga: " + getNumero() + " - Livre";
        }
    }

    // Metodo para ocupar a vaga
    public boolean ocupar(String placa) {
        if (!isOcupada()) {
            setPlaca(placa);
            setOcupada(true);
            return true;
        }
        return false;
    }

    // Metodo para liberar a vaga
    public boolean liberar() {
        if (isOcupada()) {
            setPlaca(null);
            setOcupada(false);
            return true;
        }
        return false;
    }
}
