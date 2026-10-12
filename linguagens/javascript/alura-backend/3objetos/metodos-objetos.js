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

const chavesObjeto = Object.entries(estudante);
console.log(chavesObjeto); // Saída: ['nome', 'Roberto']

const chaves = Object.keys(estudante);
console.log(chaves); // Saída: ['nome', 'idade', 'cpf']

const valores = Object.values(estudante);
console.log(valores); // Saída: ['Roberto', 30, '12332112332']

if (!chavesObjeto.includes('estudante')) {
    console.error('é necessário ter um endereço cadastrado.');
}

const objetoOriginal = { a: 1, b: 2 };
const objetoParaCopiar = { b: 3, c: 4 };

const objetoFusionado = Object.assign({}, objetoOriginal, objetoParaCopiar);

console.log(objetoFusionado);
// Saída: { a: 1, b: 3, c: 4 }

