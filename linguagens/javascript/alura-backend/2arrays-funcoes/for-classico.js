const notas = [1, 56, 3, 6, 8, 6, 7];

// primeira expressão: executada apenas 1x
// segunda expressão: a condição de execução enquanto continua verdadeira por exemplo.
// terceira expressão: executado sempre ao final do bloco.
for (let i = 0; i < notas.length; i++) {
    console.log(i, notas[i]);
}