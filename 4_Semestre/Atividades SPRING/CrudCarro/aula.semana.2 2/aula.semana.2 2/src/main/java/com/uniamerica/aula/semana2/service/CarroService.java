package com.uniamerica.aula.semana2.service;

import com.uniamerica.aula.semana2.controller.carro.dto.CarroRequest;
import com.uniamerica.aula.semana2.entity.Carro;
import com.uniamerica.aula.semana2.repository.CarroRepository;
import lombok.AllArgsConstructor;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Service;
import org.springframework.web.server.ResponseStatusException;

import java.util.ArrayList;

@Service
@RequiredArgsConstructor
public class CarroService {

    private final CarroRepository carroRepository;

    public Carro salvar(CarroRequest carroRequest){
        Carro carro = new Carro();
        carro.setMarca(carroRequest.getMarca());
        carro.setAno(carroRequest.getAno());
        carro.setPreco(carroRequest.getPreco());
        carro.setModelo(carroRequest.getModelo());
        carro.setCor(carroRequest.getCor());

        return this.carroRepository.save(carro);
    }


    public Carro atualizar(Long id, CarroRequest carroRequest){
        Carro carro = this.buscarPorId(id);

        carro.setMarca( carroRequest.getMarca() );
        carro.setAno( carroRequest.getAno() );
        carro.setPreco( carroRequest.getPreco() );
        carro.setModelo( carroRequest.getModelo() );
        carro.setCor( carroRequest.getCor() );

        return this.carroRepository.save(carro);
    }

    public Carro atualizarParcial(Long id, CarroRequest carroRequest){
        Carro carro = this.buscarPorId(id);

        if (carroRequest.getMarca() != null) carro.setMarca( carroRequest.getMarca() );
        if (carroRequest.getAno() != null) carro.setAno( carroRequest.getAno() );
        if (carroRequest.getPreco() != null) carro.setPreco( carroRequest.getPreco() );
        if (carroRequest.getModelo() != null) carro.setModelo( carroRequest.getModelo() );
        if (carroRequest.getCor() != null) carro.setCor( carroRequest.getCor() );

        return this.carroRepository.save(carro);
    }

    public Carro buscarPorId(Long id){
        return this.carroRepository.findById(id)
                .orElseThrow(
                        () -> new ResponseStatusException(HttpStatus.NOT_FOUND,
                        "Carro não encontrado com id "+ id));
    }

    public ArrayList<Carro> listar(){
        return (ArrayList<Carro>) this.carroRepository.findAll();
    }


    public Carro deletarPorId(Long id){
        Carro carro = this.buscarPorId(id);
        this.carroRepository.delete(carro);

        return null;
    }
}
