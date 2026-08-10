package com.entrega2.atividade.service;

import com.entrega2.atividade.entity.Livro;
import com.entrega2.atividade.repository.LivroRepository;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Service;
import org.springframework.web.server.ResponseStatusException;

import java.util.ArrayList;
import java.util.List;

@Service
public class LivroService {

    private final LivroRepository livroRepository;

    public LivroService(LivroRepository livroRepository) {
        this.livroRepository = livroRepository;
    }

    public Livro salvar(Livro livro) {
        return livroRepository.save(livro);
    }

    public Livro atualizar(Long id, Livro livroAtualizado) {
        Livro livroExistente = buscarPorId(id);

        livroExistente.setTitulo(livroAtualizado.getTitulo());
        livroExistente.setAutor(livroAtualizado.getAutor());
        livroExistente.setGenero(livroAtualizado.getGenero());
        livroExistente.setAnoPublicacao(livroAtualizado.getAnoPublicacao());
        livroExistente.setNumeroPaginas(livroAtualizado.getNumeroPaginas());
        livroExistente.setDisponivel(livroAtualizado.getDisponivel());

        return livroRepository.save(livroExistente);
    }

    public Livro atualizarParcial(Long id, Livro livroAtualizado) {
        Livro livroExistente = buscarPorId(id);

        if (livroAtualizado.getTitulo() != null) livroExistente.setTitulo(livroAtualizado.getTitulo());
        if (livroAtualizado.getAutor() != null) livroExistente.setAutor(livroAtualizado.getAutor());
        if (livroAtualizado.getGenero() != null) livroExistente.setGenero(livroAtualizado.getGenero());
        if (livroAtualizado.getAnoPublicacao() != null) livroExistente.setAnoPublicacao(livroAtualizado.getAnoPublicacao());
        if (livroAtualizado.getNumeroPaginas() != null) livroExistente.setNumeroPaginas(livroAtualizado.getNumeroPaginas());
        if (livroAtualizado.getDisponivel() != null) livroExistente.setDisponivel(livroAtualizado.getDisponivel());

        return livroRepository.save(livroExistente);
    }

    public Livro buscarPorId(Long id) {
        return this.livroRepository.findById(id)
                .orElseThrow(
                        () -> new ResponseStatusException(HttpStatus.NOT_FOUND,
                                "Livro nao encontrado com id " + id)
                );
    }

    public List<Livro> buscarPorGenero(String Genero) {
        return this.livroRepository.findByGenero(Genero);
    }

    public List<Livro> buscarDisponivel(Boolean disponivel) {
        return this.livroRepository.findByDisponivel(true);
    }

    public List<Livro> buscarPorAutorEAno(String autor, Long anoMin) {
        return livroRepository.findByAutorAndAnoPublicacaoGreaterThanEqual(autor, anoMin);
    }

    public List<Livro> listarTodos() {
        return (ArrayList<Livro>) this.livroRepository.findAll();
    }

    public Livro emprestar(Long id) {
        Livro livro = buscarPorId(id);

        if (!livro.getDisponivel()) {
            throw new ResponseStatusException(HttpStatus.CONFLICT, "Livro ja esta emprestado");
        }

        livro.setDisponivel(false);
        return livroRepository.save(livro);
    }

    public Livro deletarPorId(Long id) {
        Livro livro = buscarPorId(id);
        livroRepository.delete(livro);

        return null;
    }
}
