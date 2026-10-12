const estudante = {
    nome: 'Roberto',
    idade: 30,
    cpf:12332112332,
    turma: 'Pesqueiro',
    bolsista: true,
    telefones: ['554599999999', '554599999994'],
    enderecos: [{
        rua: 'Rua lixo humano',
        numero: '12',
        complemento: 'casa',
    },
    {
        rua: 'Bosta',
        numero: '32',
        complemento: null
    }]
}

function exibirTelefones(tel1, tel2) {
    console.log(`Ligar para ${tel1}`);
    console.log(`Ligar para ${tel2}`)
}

// exibirTelefones(estudante.telefones[0], estudante.telefones[1]);
exibirTelefones(...estudante.telefones); // Spread Operator

const dadosEnvio = {
    destinatario: estudante.nome,
    ...estudante.enderecos[0]
}

console.log(dadosEnvio);

const fichaGuerreiro = {
    nome: "Aragorn",
    classe: "guerreiro"
}
    
const equipoGuerreiro = {
    espada: "Andúril",
    capa: "capa élfica +2"
}

const guerreiro = { ...fichaGuerreiro, ...equipoGuerreiro }
console.log(guerreiro)

   