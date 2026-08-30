package com.mercadinho.demo.dto;

// Utilizando Record para criar uma classe imutavel, que gera construtores, getters, setters, equals, hashcode e toString automaticamente

public record ItemDTO(
        Long id,
        String nome,
        String descricao,
        String categoriaId,
        Double preco,
        Integer quantidade
) { }
