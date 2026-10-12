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

for (let chave in estudante) {
    const tipo = typeof estudante[chave];
    if (tipo !== 'object' && tipo !== 'function') {
        const texto = `a chave ${chave} tem o valor ${estudante[chave]}`
        console.log(texto);
    }
    
}