package com.testesUnitarios.demo;

import org.junit.jupiter.api.Test;
import java.util.List;

import static org.junit.jupiter.api.Assertions.*;
import static org.assertj.core.api.Assertions.assertThat;

class EstatisticaServiceTest {

    private final EstatisticasService service = new EstatisticasService();

    @Test
    void testarMedia() {
        // equals ( valor esperado, valor atual, delta de erro) - delta serve para compara ponto flutuante, sem isso ficou dando erro
        // List.of() cria uma lista imutavel, nao precisa instanciar um ArrayList, fica mais limpo e dinamico
        assertEquals(2.0, service.media(List.of(1.0, 2.0, 3.0)), 0.001);
        assertEquals(-3.0, service.media(List.of(-4.0, -2.0)), 0.001);

        // assertThrows para verificar se a excecao foi lancada, caso contrario o teste falha
        assertThrows(IllegalArgumentException.class,
                () -> service.media(List.of()));
    }

    @Test
    void testarMediana() { // mesmos comentarios do metodo acima
        assertEquals(3.0, service.mediana(List.of(5.0, 1.0, 3.0)), 0.001);
        assertEquals(2.5, service.mediana(List.of(4.0, 1.0, 3.0, 2.0)), 0.001);
        assertThrows(IllegalArgumentException.class,
                () -> service.mediana(null));
    }

    @Test
    void testarMaior() {
        // assertThat do AssertJ, serve para verificar se o valor retornado e igual ao esperado, caso contrario o teste falha
        // assertThat ( valor atual ).e Igual a ( valor esperado )
        assertThat(service.maior(List.of(1.0, 5.0, 3.0))).isEqualTo(5.0);
        assertThat(service.maior(List.of(-5.0, -1.0))).isEqualTo(-1.0);
        // Verficacao de se excecao foi lancada
        assertThrows(IllegalArgumentException.class,
                () -> service.maior(List.of()));
    }

    @Test
    void testarMenor() { // mesmos comentarios do metodo acima
        assertThat(service.menor(List.of(1.0, 5.0, 3.0))).isEqualTo(1.0);
        assertThat(service.menor(List.of(-5.0, -1.0))).isEqualTo(-5.0);
        assertThrows(IllegalArgumentException.class,
                () -> service.menor(null));
    }

    @Test
    void testarTotal() { // mesmos comentarios do metodo acima
        assertEquals(3, service.total(List.of(1.0, 2.0, 3.0)));
        assertEquals(1, service.total(List.of(5.0)));
        assertThrows(IllegalArgumentException.class,
                () -> service.total(List.of()));
    }

    @Test
    void testarModa() { // mesmos comentarios do metodo acima, muda apenas o containsExactly, que e autoexplicativo pelo nome
        assertThat(service.moda(List.of(1.0, 2.0, 2.0)))
                .containsExactly(2.0);

        assertThat(service.moda(List.of(1.0, 1.0, 2.0, 2.0)))
                .containsExactly(1.0, 2.0);

        assertThat(service.moda(List.of(1.0, 2.0, 3.0)))
                .isNull();
    }

    @Test
    void testarSoma() { // mesmos comentarios do metodo acima
        assertEquals(6.0, service.soma(List.of(1.0, 2.0, 3.0)), 0.001);
        assertThat(service.soma(List.of(-2.0, 2.0))).isZero();
        assertThrows(IllegalArgumentException.class,
                () -> service.soma(null));
    }

    @Test
    void testarAmplitude() { // mesmos comentarios do metodo acima
        assertEquals(4.0, service.amplitude(List.of(1.0, 5.0)), 0.001);
        assertThat(service.amplitude(List.of(3.0, 3.0))).isZero();
        assertThrows(IllegalArgumentException.class,
                () -> service.amplitude(List.of()));
    }
}