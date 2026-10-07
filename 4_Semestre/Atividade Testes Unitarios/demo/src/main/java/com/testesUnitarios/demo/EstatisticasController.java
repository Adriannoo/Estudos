package com.testesUnitarios.demo;

import org.springframework.web.bind.annotation.*;
import java.util.List;

@RestController
public class EstatisticasController {

    private final EstatisticasService service;

    public EstatisticasController(EstatisticasService service) {
        this.service = service;
    }

    // getMapping para calcular as estatisticas, lanca um H2 direto no HTML
    // localhost:8080/estatisticas?numeros=1&numeros=2&numeros=3&numeros=4&numeros=5 - gambiarra
    // exemplo da url: http://localhost:8080/estatisticas?numeros=1,2,2,3,4
    @GetMapping(value = "/estatisticas", produces = "text/html;charset=UTF-8") // produces para retornar o HTML, chat ajudou
    public String calcular(@RequestParam List<Double> numeros) {
        return "<h2>Média: " + service.media(numeros) + "</h2>"
                + "<h2>Mediana: " + service.mediana(numeros) + "</h2>"
                + "<h2>Maior: " + service.maior(numeros) + "</h2>"
                + "<h2>Menor: " + service.menor(numeros) + "</h2>"
                + "<h2>Total: " + service.total(numeros) + "</h2>"
                + "<h2>Moda: " + service.moda(numeros) + "</h2>"
                + "<h2>Soma: " + service.soma(numeros) + "</h2>"
                + "<h2>Amplitude: " + service.amplitude(numeros) + "</h2>";
    }
}