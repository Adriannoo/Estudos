const notas = [10, 6.5, 8, 7.5];

let somaNotas = 0;

for (let nota of notas) { // Vai guardar cada elemento do Array
    somaNotas += nota;
}

const media = somaNotas / notas.length;

console.log(`a média das notas é ${media}`);