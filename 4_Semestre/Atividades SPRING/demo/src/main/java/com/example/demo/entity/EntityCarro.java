package com.example.demo.entity;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
@Entity
public class EntityCarro {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private long id;

    private String marca;
    private String modelo;
    private String cor;
    private Double preco;
    private Integer ano;
}
