const objetoPessoa = {
    nome: 'Abraham Lincoln',
    idade: 32,
    cpf: '12312312312',
    turma: 'Javascript'
}

console.log(objetoPessoa);
console.log(objetoPessoa.nome); // Acessando a propriedade do objeto.
console.log(`Os três primeiros números do CPF são ${objetoPessoa.cpf.substring(0, 3)}`); // Substring funciona apenas com string.