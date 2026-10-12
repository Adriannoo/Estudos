package com.mercadinho.demo.service;

import com.mercadinho.demo.dto.ItemRequestDTO;
import com.mercadinho.demo.dto.ItemResponseDTO;
import com.mercadinho.demo.entity.Categoria;
import com.mercadinho.demo.entity.Item;
import com.mercadinho.demo.repository.CategoriaRepository;
import com.mercadinho.demo.repository.ItemRepository;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Service;
import org.springframework.web.server.ResponseStatusException;

import java.util.List;

@Service
public class ItemService {

    private final ItemRepository itemRepository;
    private final CategoriaRepository categoriaRepository;

    public ItemService(ItemRepository itemRepository, CategoriaRepository categoriaRepository) {
        this.itemRepository = itemRepository;
        this.categoriaRepository = categoriaRepository;
    }

    // === === === == Metodos Auxiliares == === === ===

    private ItemResponseDTO toResponseDTO(Item item) {
        return new ItemResponseDTO(
                item.getId(),
                item.getNome(),
                item.getDescricao(),
                item.getPreco(),
                item.getQuantidade(),
                item.getCategoria().getId()
            );
    }

    private void aplicarCategoria (Item item, ItemRequestDTO itemRequestDTO) {
        if (itemRequestDTO.categoriaId() != null) {
            Categoria categoria = categoriaRepository.findById(itemRequestDTO.categoriaId())
                    .orElseThrow(
                            () -> new ResponseStatusException(HttpStatus.NOT_FOUND,
                                    "Categoria nao encontrada com ID " + itemRequestDTO.categoriaId())
                    );
            item.setCategoria(categoria);
        }
    }

    private void aplicarDados(Item item, ItemRequestDTO itemRequestDTO) {
        item.setNome(itemRequestDTO.nome());
        item.setDescricao(itemRequestDTO.descricao());
        item.setPreco(itemRequestDTO.preco());
        item.setQuantidade(itemRequestDTO.quantidade());

        aplicarCategoria(item, itemRequestDTO);
    }

    private Item buscarEntidadePorId(Long id) {
        return itemRepository.findById(id)
                .orElseThrow(
                        () -> new ResponseStatusException(HttpStatus.NOT_FOUND,
                                "Item nao encontrado com ID " + id)
                );
    }

    // === === === === === === === === === === === ===

    public ItemResponseDTO salvar(ItemRequestDTO itemRequestDTO) {
        Item item = new Item();

        aplicarDados(item, itemRequestDTO);
        Item itemSalvo = itemRepository.save(item);

        return toResponseDTO(itemSalvo);
    }

    public ItemResponseDTO atualizar(Long id, ItemRequestDTO itemRequestDTO) {
        Item item = buscarEntidadePorId(id);

        aplicarDados(item, itemRequestDTO);

        return toResponseDTO(itemRepository.save(item));
    }

    public ItemResponseDTO atualizarParcial(Long id, ItemRequestDTO itemRequestDTO) {
        Item item = buscarEntidadePorId(id);

        if (itemRequestDTO.nome() != null) item.setNome(itemRequestDTO.nome());
        if (itemRequestDTO.descricao() != null) item.setDescricao(itemRequestDTO.descricao());
        if (itemRequestDTO.preco() != null) item.setPreco(itemRequestDTO.preco());
        if (itemRequestDTO.quantidade() != null) item.setQuantidade(itemRequestDTO.quantidade());
        aplicarCategoria(item, itemRequestDTO);

        return toResponseDTO(itemRepository.save(item));
    }

    public ItemResponseDTO buscarPorId(Long id) {
        Item item = buscarEntidadePorId(id);
        return toResponseDTO(item);
    }

    public List<ItemResponseDTO> listarTodos() {
        return this.itemRepository.findAll()
                .stream()
                .map(this::toResponseDTO)
                .toList();
    }

    public void deletarPorId(Long id) {
        Item item = buscarEntidadePorId(id);
        itemRepository.delete(item);
    }

}
