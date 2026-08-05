package com.example.demo.service;

import com.example.demo.repository.CarroRepository;

public class CarroService {

    private final CarroRepository carroRepository;

    public Carro salvar() {
        Carro carro = new Carro();
        carro.setMarca(carroRequest.getMarca());
        carro.setAno(carroRequest.getAno());
        carro.setPreco(carroRequest.getPreco());
        carro.setModelo(carroRequest.getModelo());

        return this.carroRepository.save(carro);
    }

}
