package com.entrega2.atividade.controller;

import com.entrega2.atividade.entity.Livro;
import com.entrega2.atividade.service.LivroService;
import lombok.Getter;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.server.ResponseStatusException;

import java.util.List;

@RestController
@RequestMapping("/api/livros")
@RequiredArgsConstructor
public class LivroController {

    public final LivroService livroService;

    // POST LOCALHOST:8080/API/LIVROS
    @PostMapping
    public ResponseEntity<Livro> cadastrarLivro(@RequestBody Livro livro) {
        Livro salvo = livroService.salvar(livro);
        return new ResponseEntity<>(salvo, HttpStatus.CREATED);
    }

    // PUT LOCALHOST:8080/API/LIVROS/id/emprestar
    @PutMapping("/{id}")
    public ResponseEntity<Livro> atualizar(@PathVariable Long id, @RequestBody Livro livro) {
        Livro atualizado =  livroService.atualizar(id, livro);
        return new ResponseEntity<>(atualizado, HttpStatus.OK);
    }

    // PATCH LOCALHOST:8080/API/LIVROS/id/
    @PatchMapping("/{id}")
    public ResponseEntity<Livro> atualizarParcial(@PathVariable Long id, @RequestBody Livro livro) {
        Livro atualizado = livroService.atualizarParcial(id, livro);
        return new ResponseEntity<>(atualizado, HttpStatus.OK);
    }

    // GET LOCALHOST:8080/API/LIVROS/id
    @GetMapping
    public ResponseEntity<List<Livro>> listarTodos() {
        return new ResponseEntity<>(livroService.listarTodos(), HttpStatus.OK);
    }

    // GET LOCALHOST:8080/API/LIVROS/1
    @GetMapping("/{id}")
    public ResponseEntity<Livro> buscarPorId(@PathVariable Long id) {
        Livro livro = this.livroService.buscarPorId(id);
        return new ResponseEntity<>(livro, HttpStatus.OK);
    }

    // GET LOCALHOST:8080/API/LIVROS/GENERO/nomeGenero
    @GetMapping("/genero/{genero}")
    public ResponseEntity<List<Livro>> buscarPorGenero(@PathVariable String genero) {
        List<Livro> livros = this.livroService.buscarPorGenero(genero);
        return new ResponseEntity<>(livros, HttpStatus.OK);
    }

    // GET LOCALHOST:8080/API/LIVROS/DISPONIVEIS
    @GetMapping("/disponiveis")
    public ResponseEntity<List<Livro>> buscarDisponiveis() {
        List<Livro> livros = this.livroService.buscarDisponivel(true);
        return new ResponseEntity<>(livros, HttpStatus.OK);
    }

    // GET LOCALHOST:8080/API/LIVROS/BUSCAR?autor=X&anoMin=Y
    @GetMapping("/buscar")
    public ResponseEntity<List<Livro>> buscarPorAutorEAno(
            @RequestParam String autor,
            @RequestParam Long anoMin) {
        List<Livro> livros = this.livroService.buscarPorAutorEAno(autor, anoMin);
        return new ResponseEntity<>(livros, HttpStatus.OK);
    }

    // PATCH LOCALHOST:8080/API/LIVROS/id/emprestar
    @PatchMapping("/{id}/emprestar")
    public ResponseEntity<Livro> emprestar(@PathVariable Long id) {
        Livro livro = livroService.emprestar(id);
        return new ResponseEntity<>(livro, HttpStatus.OK);
    }

    // DELETE LOCALHOST:8080/API/LIVROS/1
    @DeleteMapping("/{id}")
    public ResponseEntity<Livro> deletarPorId(@PathVariable Long id) {
        livroService.deletarPorId(id);
        return new ResponseEntity<>(HttpStatus.OK);
    }
}
