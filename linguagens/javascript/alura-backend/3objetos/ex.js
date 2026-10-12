// 1 e 2
// const pessoa = {
//     nome: 'Lukas',
//     idade: 42,
//     solteiro: true,
//     hobbies: ['Fumar', 'Jogar', 'Peidar'],
//     endereco: {
//         rua: 'Cascudo',
//         cidade: 'Araraquara',
//         estado: 'São Paulo'
//     }
// }

// let chaves = ['nome', 'idade', 'solteiro', 'hobbies', 'endereco'];

// function mostrarInfoPessoa(objeto, indice) {
//     indice.forEach((chave) => {
//         if (chave === 'endereco') {
//             console.log('O endereço é:');
//             const lista = ['rua', 'cidade', 'estado'];
//             for (i = 0; i <= lista.length; i++) {
//                 const palavra = lista[i];
//                 console.log(`${palavra}: ${objeto.endereco[palavra]}`);
//             }
//         } else {
//             console.log(`${chave} é ${objeto[chave]}`);
//         }
//     });
// }

// mostrarInfoPessoa(pessoa, chaves);



// 1
// const pessoa = {
//     nome: 'Monstro',
//     idade: 323,
//     sexo: 'Virgem',
//     notas: [10, 5, 10, 2, 4, 7],
//     calcularMediaNotas: function() {
//         const somaNotas = this.notas.reduce((soma, nota) => soma + nota, 0);
//         const media = somaNotas / this.notas.length;
//         return media.toFixed(2); 
//     },

//     classificarDesempenho: function() {
//         let media = this.calcularMediaNotas();
//         let desempenho = '';

//         if (media >= 9) {
//             desempenho = 'Excelente';
//         } else if (media >= 7.5 && media <= 7.9) {
//             desempenho = 'Bom';
//         } else if (media >= 6 && media <= 7.5) {
//             desempenho = 'Regular';
//         } else {
//             desempenho = 'Ruim';
//         }
//         return desempenho;
//     }
// }
// console.log({...pessoa});
// console.log(pessoa.calcularMediaNotas());
// console.log(pessoa.classificarDesempenho());


// 2, 3
const carro = {
    marca: 'Honda',
    modelo: 'Civic',
    ano: 2000,
    cor: 'Prata',
    ligado: false,
    ligar: function() {
        this.ligado = true
        console.log('O carro está ligado.');
    },
    desligar: function() {
        this.ligado = false
        console.log('O carro está desligado.');
    },
    obterDetalhes: function() {
       for (let chaves in carro) {
            if (chaves != 'ligar' && chaves != 'desligar' && chaves != 'obterDetalhes') {
                console.log(`${chaves}: ${carro[chaves]}`);
            }
       }
    }
}

carro.ligar();
console.log(carro.obterDetalhes());



