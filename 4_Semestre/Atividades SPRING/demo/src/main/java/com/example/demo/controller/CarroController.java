package com.example.demo.controller;

import com.example.demo.controller.carro.dto.CarroRequest;
import com.example.demo.controller.carro.dto.CarroResponse;
import com.example.demo.entity.EntityCarro;
import com.example.demo.service.CarroService;
import lombok.AllArgsConstructor;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api/carros")
@AllArgsConstructor
public class CarroController {
    private final CarroService carroService;

    @PostMapping("/salvar")
    public ResponseEntity<CarroResponse> salvar (@RequestBody CarroRequest carroRequest) {
        try {
            EntityCarro carro = this.carroService.salvar(carroRequest);
            return ResponseEntity.ok().body(CarroResponse.de(carro));
        } catch (Exception e) {
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
}