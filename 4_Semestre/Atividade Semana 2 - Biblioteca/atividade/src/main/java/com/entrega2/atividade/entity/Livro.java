package com.entrega2.atividade.entity;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.Id;
import lombok.Getter;
import lombok.Setter;

@Entity
@Getter
@Setter
public class Livro {
    @Id
    @GeneratedValue
    private Long id;

    private String titulo;
    private String autor;
    private String genero;
    private Long anoPublicacao;
    private Long numeroPaginas;
    private Boolean disponivel;
}
