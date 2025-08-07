/*Exercício 1 – Verificar se o número é positivo ou negativo
Crie um programa que solicite um número ao usuário e informe se ele é positivo, negativo ou zero.
======================================================================================================================
*/
const prompt = require('prompt-sync')();

let num = Number(prompt('1. Type a number: '));

if (isNaN(num)) {
    throw new Error ('The input is not a number.\n');
}

if (num > 0) {
    console.log('The number is positive.\n');
} else if (num < 0) {
    console.log('The number is negative.\n')
} else {
    console.log('The number is zero.\n');
}


/*
Exercício 2 – Verificar maioridade
Crie um programa que pergunte a idade de uma pessoa e informe se ela é maior de idade (18 anos ou mais) ou menor de idade.
=====================================================================================================================
*/
let age = Number(prompt('2. Type your age: '));
if (isNaN(age)) {
    throw new Error ('The input is not a number.\n');
}

age >= 18 ? console.log('You are an adult.\n') : console.log('You are a minor.\n');


/*
Exercício 3 – Verificar se o número é par ou ímpar
Crie um programa que peça um número ao usuário e informe se ele é par ou ímpar.
=======================================================================================================================
*/
let number = Number(prompt('3. Type a number to see if its Even or Odd: '));

if (isNaN(number)) {
    throw new Error ('The input is not a number.\n');
}

number % 2 === 0 ? console.log('The number is even!\n') : console.log('The number is odd!\n');


/*
Exercício 4 – Sistema simples de login
Peça ao usuário um nome de usuário e uma senha.
Se o usuário digitar "admin" como nome e "1234" como senha, mostre "Login bem-sucedido!". Caso contrário, mostre "Usuário ou senha incorretos.".
=======================================================================================================================
*/
let username = prompt('4. Type your username: ');
let password = prompt('Type your password: ');

if (username === 'admin' && password === '1234') {
    console.log('Login successful!\n');
} else {
    console.log('Incorrect username or password.\n');
}


/*
Exercício 5 – Calcular desconto com base no valor da compra
Solicite ao usuário o valor total da compra.

Se for maior ou igual a 100, aplique 10% de desconto
Caso contrário, aplique 5% de desconto
Mostre o valor final com desconto.
=======================================================================================================================
*/
let purchase_value = Number(prompt('5. Type the total purchase value: '));
let discount;

if (isNaN(purchase_value)) {
    throw new Error('The input is not a number.\n');
}

if (purchase_value >= 100) {
    purchase_value *= 0.90;
    discount = '10%';

} else {
    purchase_value *= 0.95;
    discount = '5%';
}

console.log(`The final value with ${discount} discount is: R$ ${purchase_value.toFixed(2)}\n`);