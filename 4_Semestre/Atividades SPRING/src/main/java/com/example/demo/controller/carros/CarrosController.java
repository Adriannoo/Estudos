package com.example.demo.controller.carros;


import com.example.demo.controller.carros.dto.CarrosRequestLombok;
import com.example.demo.controller.carros.dto.CarrosResponse;
import com.example.demo.service.CarrosService;
import jakarta.validation.Valid;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/carros")
@RequiredArgsConstructor
public class CarrosController {

    private final CarrosService carrosService;

    @GetMapping("/{id}")
    public ResponseEntity<CarrosResponse> findByCarbyId(@PathVariable String id){
        System.out.println(id);
        return ResponseEntity.ok(new CarrosResponse("teste"));

    }

    @GetMapping
    public ResponseEntity<CarrosResponse> findById(
            @RequestParam(name = "id") long id){
        System.out.println(id);
        return ResponseEntity.ok(new CarrosResponse("teste"));
    }

    @PostMapping("/salvar")
    public ResponseEntity<CarrosResponse> saveNewCar(@Valid @RequestBody CarrosRequestLombok carrosRequestLombok){
        System.out.println(carrosRequestLombok);
        return ResponseEntity.ok(new CarrosResponse(carrosRequestLombok.getMarca()));
    }

    @GetMapping("/teste")
    public ResponseEntity<String> findMarca(){
        return ResponseEntity.ok(carrosService.buscarMarca());
    }
}
