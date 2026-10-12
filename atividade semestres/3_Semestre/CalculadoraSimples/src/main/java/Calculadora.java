public class Calculadora {

    public static double somar(double a, double b) {
        return a + b;
    }

    public static double subtrair(double a, double b) {
        return a - b;
    }

    public static double multiplicar(double a, double b) {
        return a * b;
    }

    public static double dividir(double a, double b) {
        if (a == 0 || b == 0) {
            throw new IllegalArgumentException("ERRO! Impossível divisão por 0!");
        }
        return a / b;
    }



}
