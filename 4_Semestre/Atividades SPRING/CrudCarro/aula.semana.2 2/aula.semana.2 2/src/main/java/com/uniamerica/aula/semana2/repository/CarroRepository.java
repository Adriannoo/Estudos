package com.uniamerica.aula.semana2.repository;

import com.uniamerica.aula.semana2.entity.Carro;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface CarroRepository extends JpaRepository<Carro, Long> {
    //GET LOCALHOST:8080/API/CARROS/MARCA/talmarca

    List<Carro> findByMarca(String marca);
}
