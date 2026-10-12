const notas = [10, 9.5, 8, 7, 6];

// O "Map" sempre retorna um array com o resultado da função, e é capturado por outra variável
const notasAtualizadas = notas.map(nota => nota + 1 >= 10 ? 10 : nota + 1); // Operador ternário

console.log(notasAtualizadas);
