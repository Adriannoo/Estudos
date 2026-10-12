const estudantes = require('./estudantes.json');

function buscaInformacao(lista, chave, valor) {
    return lista.find((estudante) => estudante[chave].includes(valor));
}

const estudanteEncontrado = buscaInformacao(estudantes, 'nome', 'Amye');

console.log(estudanteEncontrado);

const telefoneEstudante = buscaInformacao(estudantes, 'telefone', '53927428873');

console.log(telefoneEstudante);