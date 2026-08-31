package com.mercadinho.demo.repository;

import com.mercadinho.demo.entity.Item;
import org.springframework.data.jpa.repository.JpaRepository;

// Interface que estende JpaRepository. Nao precisa implementar nada, o Spring Data JPA gera a implementacao de metodos CRUD automaticamente no tempo de execucao

public interface ItemRepository extends JpaRepository<Item, Long> {

}
