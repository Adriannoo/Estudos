package com.mercadinho.demo.entity;

import jakarta.persistence.*;
import lombok.Getter;
import lombok.Setter;

@Entity
@Getter
@Setter
public class Item {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;
    private String nome;
    private String descricao;
    private Double preco;
    private Integer quantidade;

    // Relacionamento JPA com categorias de produtos, muitos itens para uma categoria
    // JoinColumn define a chave estrangeira no banco
    @ManyToOne
    @JoinColumn(name = "categoria_id")
    private Categoria categoria;
}
