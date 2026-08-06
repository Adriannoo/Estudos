package com.uniamerica.aula.semana2.controller.carro.dto;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class CarroRequest {
    private String marca;
    private String modelo;
    private String cor;
    private Double preco;
    private Integer ano;
}
