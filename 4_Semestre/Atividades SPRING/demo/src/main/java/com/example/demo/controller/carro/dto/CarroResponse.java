package com.example.demo.controller.carro.dto;

import com.example.demo.entity.EntityCarro;

public record CarroResponse(
        long id,
        String marca,
        String modelo,
        String cor,
        Double preco,
        Integer ano
) {
    public static CarroResponse de (EntityCarro carro) {
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