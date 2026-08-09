package com.example.demo.service;

import com.example.demo.repository.CarroRepository;

import com.example.demo.controller.carro.dto.CarroRequest;
import com.example.demo.entity.EntityCarro;
import com.example.demo.repository.CarroRepository;
import org.springframework.stereotype.Service;

import java.util.ArrayList;

@Service
public class CarroService {

    private final CarroRepository carroRepository;

    public CarroService(CarroRepository carroRepository) {
        this.carroRepository = carroRepository;
    }

    public EntityCarro salvar(CarroRequest carroRequest){
        EntityCarro carro = new EntityCarro();
        carro.setMarca(carroRequest.getMarca());
        carro.setAno(carroRequest.getAno());

        return this.carroRepository.save(carro);
    }

    public EntityCarro atualizar(){

        return null;
    }

    public EntityCarro buscarPorId(){

        return null;
    }

    public ArrayList<EntityCarro> listar(){

        return null;
    }

    public EntityCarro deletarPorId(){

        return null;
    }
}