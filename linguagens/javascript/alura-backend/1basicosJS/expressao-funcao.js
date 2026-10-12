// A diferença de expressão de função para uma função convencional é que se ela for chamada antes de ser declarada, vai dar erro por não conseguir acessar a função.

// ERRO!
// console.log(estudanteReprovou(10, 3));
// console.log(estudanteReprovou(5, 10));

const estudanteReprovou = function (notaFinal, faltas) {
    if (notaFinal < 7 && faltas > 4) {
        return true;
    } else {
        return false;
    }
}

console.log(estudanteReprovou(10, 3));
console.log(estudanteReprovou(5, 10));

// Aqui não tem hoisting.