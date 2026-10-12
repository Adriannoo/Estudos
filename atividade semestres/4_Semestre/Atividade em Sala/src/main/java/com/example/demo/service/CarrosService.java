package com.example.demo.service;

import com.example.demo.entity.CarrosEntity;
import com.example.demo.entity.FabricantesEntity;
import com.example.demo.repository.CarroRepository;
import com.example.demo.repository.FabricanteRepository;
import jakarta.transaction.Transactional;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Optional;

@Service
public class CarrosService {

    private final CarroRepository carroRepository;

    private final FabricanteRepository fabricanteRepository;

    public CarrosService(CarroRepository carroRepository, FabricanteRepository fabricanteRepository) {
        this.carroRepository = carroRepository;
        this.fabricanteRepository = fabricanteRepository;
    }

    public List<CarrosEntity> findAll() {
        return carroRepository.findAllWithRelationships();
    }

    public Optional<CarrosEntity> findById(Long id) {
        return carroRepository.findById(id);
    }

    public CarrosEntity salvarCarro(CarrosEntity carrosEntity) {
        if (carrosEntity.getAddress() != null) {
            carrosEntity.getAddress().setCarros(carrosEntity);
        }
        return carroRepository.save(carrosEntity);
    }

    public FabricantesEntity salvarFabricante(FabricantesEntity fabricantesEntity){
        return this.fabricanteRepository.save(fabricantesEntity);
    }


    @Transactional
    public void associarFabricante(Long carroId, Long fabricanteId){
        var carro = this.carroRepository.findById(carroId).orElseThrow();
        var fabricante = this.fabricanteRepository.findById(fabricanteId).orElseThrow();

        carro.setFabricantes(fabricante);

    }

}
