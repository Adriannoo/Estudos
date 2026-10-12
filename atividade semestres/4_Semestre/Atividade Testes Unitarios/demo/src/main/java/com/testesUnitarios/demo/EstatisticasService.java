package com.testesUnitarios.demo;

import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.TreeSet;

@Service
public class EstatisticasService {

    // Validador simples para evitar uma lista zerada, vou deixar conter null para verificar no test depois
    public void validar(List<Double> numeros) {
        if (numeros == null || numeros.isEmpty()) {
            throw new IllegalArgumentException();
        }
    }

    // Metodo de soma, utilizando Stream para processar a lista de numeros e somar
    public double soma(List<Double> numeros) {
        validar(numeros);
        // Stream para processar os numeros e somar
        return numeros.stream()
                .mapToDouble(n -> n) // Mapeia cada elemento da lista para um double
                .sum(); // Metodo que retorna a soma de todos os elementos
    }

    // Metodo utilizado para o metodo de media, tirando o total do array
    public int total (List<Double> numeros) {
        validar(numeros);
        return numeros.size(); // size para tirar o tamanho total do array
    }

    public double media(List<Double> numeros) {
        validar(numeros);
        return soma(numeros)/total(numeros); // Metodo de media, utilizando a soma e o total do array
    }

    public double maior(List<Double> numeros) {
        validar(numeros);
        return Collections.max(numeros); // Metodo do package Util Collections.max para retornar o maior numero da lista
    }

    public double menor(List<Double> numeros) {
        validar(numeros);
        return Collections.min(numeros); // Metodo para retornar o menor
    }

    // Calculo de amplitude, utilizado para retornar a diferenca entre o maior e o menor numero da lista
    public double amplitude(List<Double> numeros) {
        validar(numeros);
        return maior(numeros) - menor(numeros);
    }

    // Calculo de mediana, serve para retornar o numero do meio da lista caso a lista seja impar, se for par, retorna a medida dos dois numeros do meio
    public double mediana(List<Double> numeros) {
        validar(numeros);

        List<Double> lista = new ArrayList<>(numeros); // Cria uma nova lista para ordenar os numeros
        Collections.sort(lista); // Metodo sort do package Collections para ordenar a lista de numeros, do menor para o maior

        int meio = lista.size() / 2;

        if (lista.size() % 2 == 0 ) { // Se o resto da divisao for 0, a mediana sera a media dos numeros do meio, pois a lista tem um tamanho par
            return (lista.get(meio - 1) + lista.get(meio)) / 2;
        }

        return lista.get(meio); // Se o tamanho da lista for impar, a mediana sera o numero do meio
    }

    // Metodo de moda, utilizado para retornar o numero que mais repete da lista, se tem mais de um, retorna o primeiro mesmo
    public List<Double> moda(List<Double> numeros) { // Metodo do tipo List pois a moda pode ter mais de um numero
        validar(numeros);

        List<Double> modas = new ArrayList<>();
        int maiorFrequencia = 1;

        for (Double numero : new TreeSet<>(numeros)) { // TreeSet, metodo do java util, serve para ordenar e remover numeros duplicados da lista
            int frequencia = Collections.frequency(numeros, numero); // frequency do package Collections, serve para contar quantas vezes um numero aparece e retorna a quantidade de vezes, bem top

            if (frequencia > maiorFrequencia) {
                modas.clear();
                maiorFrequencia = frequencia;
            }

            if (frequencia == maiorFrequencia && frequencia > 1) {
                modas.add(numero); // Adiciona o numero na lista de modas
            }
        }
        return modas.isEmpty() ? null : modas; // Retornando um operador ternario que verifica se a moda esta vazia, se estiver, retorna null, se nao, retorna a moda
    }
}
