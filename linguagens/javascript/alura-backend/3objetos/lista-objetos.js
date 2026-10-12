const estudante = {
    nome: 'Abraham Lincoln',
    idade: 32,
    cpf: '12312312312',
    turma: 'Javascript',
    bolsista: true,
    telefones: ['554599999999', '5545939393993'],
    endereco: [{
        rua: 'Rua Qualquer uma',
        numero: '432',
        bairro: 'Monstro',
        complemento: 'Casa'
    }]
}

estudante.endereco.push({
    rua: 'Bola',
    numero: '32',
    bairro: 'De pobre',
    complemento: 'Mansão'
})

// console.log(estudante.endereco);
// console.log(estudante.endereco[0]);
// console.log(estudante.endereco[1]);

const listaEnderecosComComplemento = estudante.endereco.filter((endereco) => endereco.complemento); // Se for truthy, retorna enderecos com complemento.

console.log(listaEnderecosComComplemento);