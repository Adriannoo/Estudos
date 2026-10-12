package com.exercicio.spring.service;

import com.exercicio.spring.entity.Entrada;
import com.exercicio.spring.entity.Saida;
import org.springframework.stereotype.Service;

@Service
public class AtendimentoService {
    // Regras de Negocio
    // O atendimento será PRIORITARIO quando:
    // A idade for maior ou igual a 60 anos;
    // A pessoa estiver gestante;
    // A pessoa possuir alguma deficiência.

    public Saida classificar(Entrada entrada) {
        // Testa as condicoes da regra de negocio, senao sai como normal
        Saida saida = new Saida();
        saida.setNome(entrada.getNome());

        if(entrada.getIdade() >= 60 || entrada.getGestante() || entrada.getPessoaComDeficiencia()) {
            saida.setTipoAtendimento("PRIORITARIO");
            saida.setMensagem("Pessoa com direito a atendimento prioritario!");
        } else {
            saida.setTipoAtendimento("NORMAL");
            saida.setMensagem("Pessoa com atendimento normal!");
        }

        return saida;
    }

}
