package com.mercadinho.demo.dto;

public record ItemResponseDTO (
        Long id,
        String nome,
        String descricao,
        Double preco,
        Integer quantidade,
        Long categoriaId
) { }
