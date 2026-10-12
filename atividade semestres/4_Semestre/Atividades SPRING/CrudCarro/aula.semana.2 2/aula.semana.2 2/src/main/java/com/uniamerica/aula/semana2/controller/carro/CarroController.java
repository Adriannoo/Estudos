package com.uniamerica.aula.semana2.controller.carro;

import com.uniamerica.aula.semana2.controller.carro.dto.CarroRequest;
import com.uniamerica.aula.semana2.controller.carro.dto.CarroResponse;
import com.uniamerica.aula.semana2.entity.Carro;
import com.uniamerica.aula.semana2.service.CarroService;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.server.ResponseStatusException;

import java.util.List;

@RestController
@RequestMapping("/api/carros")
@RequiredArgsConstructor
public class CarroController {

    private final CarroService carroService;

    // POST LOCALHOST:8080/API/CARROS
    @PostMapping()
    public ResponseEntity<CarroResponse> salvar (@RequestBody CarroRequest carroRequest){
        try{
            Carro carro = this.carroService.salvar(carroRequest);
            return new ResponseEntity<CarroResponse>(CarroResponse.de(carro), HttpStatus.CREATED);
        } catch (Exception e) {

            return new ResponseEntity(HttpStatus.BAD_REQUEST);
        }
    }

    //GET LOCALHOST:8080/API/CARROS/1
    @GetMapping("/{id}")
    public  ResponseEntity<CarroResponse> buscarPorId (@PathVariable Long id){

        try {
            Carro carro = this.carroService.buscarPorId(id);
            return new ResponseEntity<CarroResponse>(CarroResponse.de(carro), HttpStatus.CREATED);
        } catch (ResponseStatusException responseStatusException) {
            throw responseStatusException;
        }
        catch (Exception e) {
            return new ResponseEntity(HttpStatus.BAD_REQUEST);
        }
    }

    //GET LOCALHOST:8080/API/CARROS/MARCA/talmarca
    @GetMapping("/marca/{marca}")
    public ResponseEntity<CarroResponse> buscarPorMarca (@PathVariable String marca) {
        try {
            Carro carro = this.carroService.buscarPorMarca(marca);
            return new ResponseEntity<CarroResponse>(CarroResponse.de(carro), HttpStatus.CREATED);
        } catch (Exception e) {
            return new ResponseEntity(HttpStatus.BAD_REQUEST);
        }
    }

    @GetMapping()
    public ResponseEntity<List<CarroResponse>> listar() {
        try {
            List<CarroResponse> carros = this.carroService.listar()
                    .stream()
                    .map(CarroResponse::de)
                    .toList();
                return new ResponseEntity<>(carros, HttpStatus.ACCEPTED);
        } catch(Exception e) {
            return new ResponseEntity(HttpStatus.BAD_REQUEST);
        }
    }

    // PUT LOCALHOST:8080/API/CARROS/6
    @PutMapping("/{id}")
    public ResponseEntity<CarroResponse> atualizar(@PathVariable Long id,
                                                   @RequestBody CarroRequest carroRequest) {
        try {
            Carro carro = this.carroService.atualizar(id, carroRequest);
            return new ResponseEntity<CarroResponse>(CarroResponse.de(carro), HttpStatus.ACCEPTED);

        } catch (Exception e) {
            throw new ResponseStatusException(HttpStatus.BAD_REQUEST);
        }
    }

    // PUT LOCALHOST:8080/API/CARROS/6
    @PatchMapping("/{id}")
    public ResponseEntity<CarroResponse> atualizarParcial(@PathVariable Long id,
                                                   @RequestBody CarroRequest carroRequest) {
        try {
            Carro carro = this.carroService.atualizarParcial(id, carroRequest);
            return new ResponseEntity<CarroResponse>(CarroResponse.de(carro), HttpStatus.ACCEPTED);

        } catch (Exception e) {
            throw new ResponseStatusException(HttpStatus.BAD_REQUEST);
        }
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<CarroResponse> deleterPorId(@PathVariable Long id) {
        try {
            this.carroService.deletarPorId(id);

            return new ResponseEntity<> (HttpStatus.ACCEPTED);
        } catch (Exception e) {
            throw new ResponseStatusException(HttpStatus.BAD_REQUEST);
        }
    }


}
