// Não são içadas também. (hoisting)

const estudanteReprovou = (notaFinal, faltas) => {
    if (notaFinal < 7 && faltas > 4) {
        return true;
    } else {
        return false;
    }
}

const exibeNome = (nome) => nome; // Dá o return na mesma linha

console.log(estudanteReprovou(10, 3));
console.log(estudanteReprovou(5, 10));
console.log(exibeNome('Deus'));