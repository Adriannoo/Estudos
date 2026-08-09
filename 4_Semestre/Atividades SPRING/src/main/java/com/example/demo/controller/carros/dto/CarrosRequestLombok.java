package com.example.demo.controller.carros.dto;

import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.NotEmpty;
import jakarta.validation.constraints.NotNull;
import jakarta.validation.constraints.Pattern;
import lombok.*;

@Getter
@Setter
@AllArgsConstructor
@NoArgsConstructor
@ToString
public class CarrosRequestLombok {

    @NotBlank(message = "Não pode ser uma informação em branco")
    @Pattern(regexp = "")
    private String marca;

}
