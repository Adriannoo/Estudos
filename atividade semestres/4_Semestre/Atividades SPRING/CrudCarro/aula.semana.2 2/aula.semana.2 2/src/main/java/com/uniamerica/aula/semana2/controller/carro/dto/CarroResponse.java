package com.uniamerica.aula.semana2.controller.carro.dto;

import com.uniamerica.aula.semana2.entity.Carro;
import com.uniamerica.aula.semana2.service.CarroService;

public record CarroResponse(
    long id,
    String marca,
    String cor,
    String modelo,
    Double preco,
    Integer ano
) {
    public static CarroResponse de(Carro carro){
        return new CarroResponse(
                carro.getId(),
                carro.getMarca(),
                carro.getCor(),
                carro.getModelo(),
                carro.getPreco(),
                carro.getAno()
        );
    }
}
