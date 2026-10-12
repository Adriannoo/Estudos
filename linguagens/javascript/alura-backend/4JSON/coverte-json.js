const estudante = require('./estudante.json');

const stringEstudante = JSON.stringify(estudante); // Transforma o objeto em string

console.log(stringEstudante);
console.log(typeof stringEstudante);

console.log(stringEstudante.nome); //undefined

const objEstudante = JSON.parse(stringEstudante); // Transforma a strin em objeto

console.log(objEstudante);
console.log(objEstudante.nome);
