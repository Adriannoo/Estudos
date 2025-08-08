/*
==========================================================
                Atividades para switch
==========================================================

Atividade 1: Identificando o Mês
Dado um número de 1 a 12, imprima o nome do mês
*/
const prompt = require('prompt-sync')();

let monthNumber = Number(prompt('1. Type a number from 1 to 12 to see the month?: '));
if (isNaN(monthNumber)) {
    throw new Error ('The input is not a number.\n');
}

switch (monthNumber) {
    case 1: console.log('January\n'); break;
    case 2: console.log('February\n'); break;
    case 3: console.log('March\n'); break;
    case 4: console.log('April\n'); break;
    case 5: console.log('May\n'); break;
    case 6: console.log('June\n'); break;
    case 7: console.log('July\n'); break;
    case 8: console.log('August\n'); break;
    case 9: console.log('September\n'); break;
    case 10: console.log('October\n'); break;
    case 11: console.log('November\n'); break;
    case 12: console.log('December\n'); break;
    default: throw new Error ('Invalid month number!'); break;
}


/*
Atividade 2: Calculadora Simples
Receber dois números e uma operação (+, -, *, /) e usar switch para mostrar o resultado da operação.
*/
console.log('2. Simple Calculator');
let num1 = Number(prompt('Type the first number: '));
let num2 = Number(prompt('Type the second number: '));
console.log('Type the operation:\n1. +\n2. -\n3. *\n4. /');
let operation = Number(prompt(': '));

if (isNaN(num1) || isNaN(num2) || isNaN(operation)) {
    throw new Error ('The input is not a number.\n');
}

switch (operation) {
    case 1: console.log(`The result of ${num1} + ${num2} is ${num1 + num2}\n`); break;
    case 2: console.log(`The result of ${num1} - ${num2} is ${num1 - num2}\n`); break;
    case 3: console.log(`The result of ${num1} * ${num2} is ${num1 * num2}\n`); break;
    case 4: if (num1 === 0 || num2 === 0) {
                throw new Error ('Division by zero is not allowed.\n');
            } else {
                console.log(`The result of ${num1} / ${num2} is ${num1 / num2}\n`); break;
            }
    default: throw new Error ('Invalid operation selected.\n'); break;

}


/*
===========================================================
                Atividades para while
===========================================================

Atividade 1: Contagem até 10
Escreva um programa que use while para imprimir os números de 1 a 10.
*/
console.log('4. Counting to 10');
let ten = 0;
while (ten !== 10) {
    ten++;
    console.log(ten);
   
}


/*
Atividade 2: Somando Números até Parar
O programa deve continuar pedindo números ao usuário até que ele digite 0. No fim, mostrar a soma total.
*/

let sum = 0, input;
console.log('\n4. Sum of Numbers');
while (input !== 0) {
    input = Number(prompt('Type a number to add to the sum (0 to stop): '));
    if (isNaN(input)) {
        throw new Error ('The input is not a number.\n');
    }
    sum += input;
}

console.log(`The total sum is: ${sum}\n`);


/*
=============================================================
                Atividades para for
============================================================

Atividade 1: Tabuada de um Número
Mostrar a tabuada de um número usando for.
*/
let number = Number(prompt('5. Type a number to see its multiplication table: '));

if (isNaN(number)) {
    throw new Error ('The input is not a number.\n');
}

console.log(`Multiplication table of ${number}:`);
for (let i = 1; i <= 10; i++) {
    console.log(`${number} x ${i} = ${number * i}`);
}


/*
Atividade 2: Números Pares de 1 a 20
Utilize for para imprimir todos os números pares de 1 até 20.
*/
console.log('\n6. Even Numbers from 1 to 20');

for (let i = 0; i <= 20; i++) {
    if (i % 2 === 0) {
        console.log(i);
    }
}
