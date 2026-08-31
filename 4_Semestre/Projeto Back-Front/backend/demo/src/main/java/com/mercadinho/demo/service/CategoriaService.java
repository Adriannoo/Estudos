package com.mercadinho.demo.service;

import com.mercadinho.demo.dto.CategoriaDTO;
import com.mercadinho.demo.entity.Categoria;
import com.mercadinho.demo.repository.CategoriaRepository;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Service;
import org.springframework.web.server.ResponseStatusException;

import java.util.List;

@Service
public class CategoriaService {

    private final CategoriaRepository categoriaRepository;

    public CategoriaService(CategoriaRepository categoriaRepository) {
        this.categoriaRepository = categoriaRepository;
    }

    // Metodo para converter entity em DTO. Evita duplicacao de codigo e facilita manutencao
    private CategoriaDTO toResponseDTO(Categoria categoria) {
        return new CategoriaDTO(categoria.getId(), categoria.getNome());
    }

    private void aplicarDados(Categoria categoria, CategoriaDTO categoriaDTO) {
        categoria.setNome(categoriaDTO.nome());
    }

    private Categoria buscarEntidadePorId(Long id) {
        return categoriaRepository.findById(id)
                .orElseThrow(
                        () -> new ResponseStatusException(HttpStatus.NOT_FOUND,
                                "Categoria nao encontrada com ID " + id)
                );
    }

    public CategoriaDTO salvar(CategoriaDTO categoriaDTO) {
        Categoria categoria = new Categoria();
        aplicarDados(categoria, categoriaDTO);
        Categoria categoriaSalva = categoriaRepository.save(categoria);

        return toResponseDTO(categoriaSalva);
    }

    public CategoriaDTO atualizar(Long id, CategoriaDTO categoriaDTO) {
        Categoria categoria = buscarEntidadePorId(id);

        aplicarDados(categoria, categoriaDTO);

        return toResponseDTO(categoriaRepository.save(categoria));
    }

    public CategoriaDTO buscarPorId(Long id) {
         Categoria categoria = buscarEntidadePorId(id);
         return toResponseDTO(categoria);
    }

    public List<CategoriaDTO> listarTodas() {
        return categoriaRepository.findAll()
                .stream()
                .map(this::toResponseDTO)
                .toList();
    }

    public void deletarPorId(Long id) {
        Categoria categoria = buscarEntidadePorId(id);

        categoriaRepository.delete(categoria);
    }
}
