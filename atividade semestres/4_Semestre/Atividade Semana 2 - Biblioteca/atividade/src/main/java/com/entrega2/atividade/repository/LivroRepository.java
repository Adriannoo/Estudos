package com.entrega2.atividade.repository;

import com.entrega2.atividade.entity.Livro;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface LivroRepository extends JpaRepository <Livro, Long> {

    // Spring Data JPA faz as querys sozinhas, so precisa declarar os metodos na interface

    List<Livro> findByDisponivel(Boolean disponivel);
    List<Livro> findByGenero(String genero);

    // Sintaxe "And -> XAndY" para 2 condicoes, e "GreaterThanEqual" para maior ou igual
    List<Livro> findByAutorAndAnoPublicacaoGreaterThanEqual(String autor, Long anoPublicacao);
}
