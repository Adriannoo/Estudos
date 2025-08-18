const prompt = require('prompt-sync')();

// ============================================
// Exercícios com Arrow Function
// ============================================

// 1) Crie uma arrow function chamada "dobro" que receba um número
//    e retorne o dobro dele.
//    Exemplo: dobro(10) → 20
// --------------------------------------------
let num = Number(prompt('1. Type a number to get its double: '));

if (isNaN(num)) {
    throw new Error('The input is not a number!\n');
}

let dobro = (num) => num * 2;

console.log(`The double of ${num} is: ${dobro(num)}\n`);

// ============================================


// 2) Escreva uma arrow function chamada "ehPar" que receba um número
//    e retorne true se for par e false se for ímpar.
//    Teste com os valores 7 e 8.
// --------------------------------------------
let ehPar = (num) => num % 2 === 0;

let num1 = Number(prompt('2. Type a number to check if it is even or odd: '));

if (isNaN(num1)) {
    throw new Error('The input must be a number!\n');
}

if (ehPar(num1)) {
    console.log(`The number ${num1} is even!\n`);
} else {
    console.log(`The number ${num1} is odd!\n`);
}

// ============================================


// 3) Dado o array de nomes abaixo, use "map" com arrow function
//    para transformar todos os nomes em letras maiúsculas.
//    const nomes = ["Ana", "Pedro", "Carla", "Lucas"];
// --------------------------------------------
const nomes = ["Ana", "Pedro", "Carla", "Lucas"];

let nomes_maiusculos = (array) => array.map(nome => nome.toUpperCase()); 

console.log(`3. Names in uppercase: ${nomes_maiusculos(nomes)}\n`);
// ============================================


// 4) Crie uma arrow function chamada "somaArray" que receba um array
//    de números e retorne a soma de todos eles.
//    Exemplo: [1, 2, 3, 4] → 10
// --------------------------------------------
let num_array = [1, 2, 3, 4];

let sum_array = (array) => {
    let sum = 0;
    for (let i = 0; i < array.length; i++) {
        sum += array[i];
    }
    return sum;
}

console.log(`4. The sum of the array [${num_array}] is: ${sum_array(num_array)}\n`);

// ============================================


// 5) Dado o array de números abaixo, use "filter" com arrow function
//    para retornar apenas os números maiores que 10.
//    const numeros = [5, 12, 8, 20, 7];
// --------------------------------------------
const numeros = [5, 12, 8, 20, 7];
let maior_que_10 = (array) => array.filter(num => num > 10);

console.log(`5. Numbers bigger than 10 in this array "${numeros}" is "${maior_que_10(numeros)}"!\n`);

// ============================================
