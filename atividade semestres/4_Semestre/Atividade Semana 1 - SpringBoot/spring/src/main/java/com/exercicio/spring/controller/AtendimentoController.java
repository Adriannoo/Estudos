package com.exercicio.spring.controller;


import com.exercicio.spring.entity.Entrada;
import com.exercicio.spring.entity.Saida;
import com.exercicio.spring.service.AtendimentoService;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api/atendimentos")
public class AtendimentoController {

    private final AtendimentoService atendimentoService;

    public AtendimentoController(AtendimentoService atendimentoService) {
        this.atendimentoService = atendimentoService;
    }

    // http://localhost:8080/api/atendimentos/classificar
    @PostMapping("classificar")
    public Saida classificar(@RequestBody Entrada entrada) {

        return atendimentoService.classificar(entrada);
    }
}
