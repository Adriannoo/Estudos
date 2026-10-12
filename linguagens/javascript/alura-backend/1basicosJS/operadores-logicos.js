const notaFinal = 6;
const faltas = 1;
const advertencia = 0;

// if (notaFinal < 7 || faltas > 4) {
//     console.log('Reprovado!');
// } else {
//     console.log('Aprovado!');
// }

// if (notaFinal < 7 && faltas > 4) {
//     console.log('Reprovado!');
// } else {
//     console.log('Aprovado!');
// }

if (faltas <= 2 && !advertencia) {
    console.log('Aprovado');
} else {
    console.log('Reprovado');
}