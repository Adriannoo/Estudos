package com.example.demo.controller.carro.dto;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class CarroRequest {
    private long id;
    private String marca;
    private String modelo;
    private String cor;
    private Double preco;
    private Integer ano;
}
