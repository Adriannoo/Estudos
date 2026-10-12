const notas = [10, 6.5, 8, 7.5];

let somaNotas = 0;

// notas.forEach(somaDasNotas); // forEach não retorna nenhum tipo de valor, apenas executa

// function somaDasNotas(nota) {
//     somaNotas += nota;
// }

notas.forEach(nota => { // Arrow Function. Duas maneiras
    somaNotas += nota 
});

media = somaNotas / notas.length;

console.log(`A média das notas é: ${media}`);
