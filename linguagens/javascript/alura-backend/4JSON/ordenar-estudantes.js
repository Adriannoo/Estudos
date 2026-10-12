const estudantes = require('./estudantes.json');

function ordena(lista, propriedade) {
    return lista.sort((a, b) => {
        if (a[propriedade] < b[propriedade]) return -1;
        if (a[propriedade] > a[propriedade]) return 1;
    })
}

const listaOrdenada = ordena(estudantes, 'nome');

console.log(listaOrdenada);