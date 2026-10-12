const estudante = {
    nome: 'Abraham Lincoln',
    idade: '32',
    cpf: '12312312312',
    turma: 'Javascript'
}

function exibeInfoObjeto(objeto, info) {
    return objeto[info];
}

console.log(exibeInfoObjeto(estudante, 'nome'));
console.log(exibeInfoObjeto(estudante, 'turma'));
console.log(estudante.pet);
console.log(estudante['pet']);