// 1
// const nums = [, 3,,4,,, 6];
// console.log(nums, nums.length);
// retorna '[ <1 empty item>, 3, <1 empty item>, 4, <2 empty items>, 6 ] 7'



// 1
// function concatena(array1, array2) {
//     return array1.concat(array2);
// }

// const lista1 = ['asdas', '31231'];
// const lista2 = [1, 5, 6];
// const juntas = concatena(lista1, lista2);

// console.log(juntas);


// 2
// const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// const parteNums = nums.slice(2, 7);

// console.log(parteNums);


// 3
// const frutas = ['Maçã', 'Banana', 'Laranja', 'Limão', 'Abacaxi'];

// frutas.splice(2, 2, 'Kiwi', 'Pêssego');

// console.log(frutas);


// 4
// const menuPrincipal = ['Glasse', 'Papperdele', 'Lixo'];
// const menuDeSobremesas = ['Vacherin', 'Petit Gateau'];
// const menuCompleto = menuPrincipal.concat(menuDeSobremesas);

// console.log(menuCompleto);


// 5
// let matriz = [];
// let valorInicial = 1;

// for (let i = 0; i < 3; i++) {
//     let linha = [];
//     for (let j = 0; j < 3; j++) {
//         linha.push(valorInicial++);
//     }
//     matriz.push(linha);
// }

// console.log('Matriz de números');
// matriz.forEach(row => console.log(row));
// // Legalzinho

// 6
// console.log(`Linha 2, coluna 3, número = ${matriz[1][2]}`);

// 7
// // matriz[2].splice(1, 1, 15); OU
// matriz[2][1] = 15;
// matriz.forEach(row => console.log(row));



// 1
// const lista = [1, 6, 3, 7];

// for (let numeros of lista) {
//     console.log(numeros);
// }


// 2
// function somaLista(array) {
//     let soma = 0;
//     for (let i = 0; i < array.length; i++) {
//         soma += array[i];
//     }
//     return soma;
// }

// console.log(somaLista([5, 5, 5]));


// 3
// function maiorMenor(array) {
//     for (let i = 0; i < array.length; i++) {
//         if (array[i] > maior) {
//             maior = array[i];
//         }
//         if (array[i] < menor) {
//             menor = array[i]
//         }
//     }
//     return console.log(`O maior número é ${maior} e o menor é ${menor}.`);
// }

// let maior = 0;
// let menor = 0;

// const arrays = [1, 52, -6345, 32];
// maiorMenor(arrays);


// 4
// const numeros = [3, 8, 12, 5, 6, 10, 7, 2, 9, 14]

// for (let numero of numeros) {
//     if (numero % 2 === 0) {
//         console.log(numero);    
//     }
// }
// OU
// for (let i = 0; i < numeros.length; i++) {
//     if (numeros[i] % 2 === 0) {
//         console.log(numeros[i]);
//     }
// }



//1
// const nums = [1, 2, 4, 6, 3, 75];
//
// nums.forEach(num => console.log(num));


// 2
// function executaOperacaoEmArray(array, callback) {
//     return array.map(callback);
// }

// function dobraNum(num) {
//     return num * 2;
// } 

// const numeros = [1, 3, 5, 1];

// console.log(executaOperacaoEmArray(numeros, dobraNum));


// 3
// const numeros = [1, 5, 2, 3, 7];
// const selecionado = 6;
// let posicao = -1;

// for (let i = 0; i < numeros.length; i++) {
//     if (numeros[i] === selecionado) {
//         posicao = i;
//         console.log(`Posição do número ${selecionado}: ${posicao + 1}`);
//         break;
//     } else {
//         console.log('Número não contém na lista.');
//         break;
//     }
// }


// 4
// const nomesTurmaA = [
//     'João Silva',
//     'Maria Santos',
//     'Pedro Almeida'
//   ];
  
//   const nomesTurmaB = [
//     'Carlos Oliveira',
//     'Ana Souza',
//     'Lucas Fernandes'
//   ];

// const todasAsTurmas = nomesTurmaA.concat(nomesTurmaB);

// const alunoProcurado = todasAsTurmas.find((nome) => nome === 'Glande'); 

// if (alunoProcurado) {
//     console.log(`Aluno encontrado, ${alunoProcurado}`);
// } else {
//     console.log('Aluno não encontrado.')
// }


// 5 
// const numeros = [6, 9, 12, 15, 18, 21];

// const multiplicação = numeros.forEach(num => {
//     const resultado = num * 3;
//     console.log(resultado);
// });

// const indiceNum = numeros.findIndex((num) => num === 18);

// if (indiceNum !== -1) {
//     console.log(`Número 18 no índice ${indiceNum}`);
// } else {
//     console.log('O número 18 não está presende no array.')
// }



// Reduce 
// 1
// const numeros = [43, 50, 65, 12]; 
// const soma = numeros.reduce((acum, atual) => atual + acum, 0);
// console.log(soma) //170

// 2
// const soma = numeros.reduce(function (acc, atual) {
//     return atual + acc
// }, 0)

// 3
// function operacaoNumerica(acc, atual) {
//     return atual + acc
// }
    
// const soma = numeros.reduce(operacaoNumerica, 0)



// 1
// const arra1 = [1, 4, 3];
// const arra2 = ['bosta', 'lixo'];
// const arra3 = ['pedreiro', 'xorume'];

// function retornoArray(...arrays) {
//     return listas = [].concat(...arrays);
// }

// console.log(retornoArray(arra1, arra2, arra3));


// 2
// const valores = [1, 5, 4];
// const soma = valores.reduce((indice, valor) => valor + indice, 0);

// console.log(soma);


// 3
// const coresLista1 = ['Vermelho', 'Verde', 'Azul', 'Amarelo', 'Vermelho'];
// const coresLista2 = ['Laranja', 'Verde', 'Roxo', 'Azul'];

// const coresUnicas = [...new Set([...coresLista1, ...coresLista2])]; melhor forma.

// function melhorFuncao(lista1, lista2) {
//     const somaLista = lista1.concat(lista2);
//     return new Set(somaLista);
// }

// console.log(melhorFuncao(coresLista1, coresLista2));


// 4
// const listaNum = [1, 2, 3, 4, 5, 6];

// function par(lista) {
//     return lista.filter((num) => num % 2 === 0);
// }

// const listaPar = par(listaNum);

// console.log(listaNum);
// console.log(listaPar);