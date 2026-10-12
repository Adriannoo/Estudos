// 1. Crie duas variáveis com números e mostre a soma entre elas.
const num1 = 10, num2 = 20;
const sum = num1 + num2;
console.log(`Exercicio 1:\nA soma de ${num1} e ${num2} e igual a ${sum}.\n`);

// 2. Subtraia dois números e exiba o resultado no console.
const sub = num1 - num2;
console.log(`Exercicio 2:\nA subtração de ${num1} e ${num2} e igual a ${sub}.\n`);

// 3. Crie uma variável e incremente seu valor usando += .
let increment = 5;
console.log(`Exercicio 3:\nVariavel antes do incremento: ${increment}.`);
increment += 1; // Variavel "increment" recebe ela mesma mais 1;
console.log(`Variavel apos o incremento: ${increment}.\n`);

// 4. Divida dois números e imprima o resultado.
const division = num2 / num1;
console.log(`Exercicio 4:\nA divisão de ${num2} por ${num1} e igual a ${division}.\n`);

// 5. Mostre o resto da divisão entre 10 e 3.
const remainder = 10 % 3; // resto da divisao, ou seja, o que sobra, 9 e sobra 1 
console.log(`Exercicio 5:\nO resto da divisão entre 10 e 3 e igual a ${remainder}.\n`);

// 6. Verifique se dois valores são iguais ( == ).
const isEqual = (num1 == num2); // Retorna um valor Boolean, true ou false
console.log(`Exercicio 6:\nOs valores ${num1} e ${num2} são iguais?\n${isEqual}.\n`);

// 7. Verifique se dois valores são estritamente iguais ( === ).
// Outro que retorna um valor Boolean, true ou false.
const isStrictEqual = (num1 === num2);
console.log(`Exercicio 7:\nOs valores ${num1} e ${num2} sao estritamente iguais?\n${isStrictEqual}.\n`);

// 8. Teste se um número é maior que outro.
const isGreater = (num1 > num2);
console.log(`Exercicio 8:\nO numero ${num1} e mair que o ${num2}?\n${isGreater}.\n`);

// 9. Teste se dois números são diferentes ( !== ).
const isNotEqual = (num1 !== num2);
console.log(`Exercicio 9:\nOs numeros ${num1} e ${num2} sao diferentes?\n${isNotEqual}.\n`);

// 10. Crie uma expressão com && que retorne true.
const andExpression = (num1 < num2 && num2 > num1);
console.log(`Exercicio 10:\nA expressao (num1 < num2 && num2 > num1) e verdadeira?\n${andExpression}.\n`);

// 11. Crie uma expressão com || que retorne true.
const orExpression = (num1 < num2 || num2 < num1);
console.log(`Exercicio 11:\nA expressao (num1 < num2 || num2 < num1) e verdadeira?\n${orExpression}.\n`);

// 12. Inverta um valor booleano usando !.
const booleanValue = true;
const invertedValue = !booleanValue;
console.log(`Exercicio 12:\nO valor booleano ~${booleanValue}~ invertido e ~${invertedValue}~.\n`);

// 13. Crie um array com 4 nomes e exiba o primeiro nome.
let names = ['Shrek', 'Thor', 'Messi', 'Undertaker'];
console.log(`Exercicio 13:\nO primeiro nome do array e ${names[0]}.\n`);

// 14. Adicione um novo nome ao array e mostre o tamanho atualizado.
names.push('Goku'); // Novo nome no final do array
console.log(`Exercicio 14:\nO novo nome adicionado ao array e ${names[4]}.`);
console.log(`O novo array e: ${names}.\n`);

// 15. Remova o último item do array e mostre o novo array.
names.pop();
console.log(`Exercicio 15:\nO ultimo nome do array foi removido com a funcao pop()`);
console.log(`O novo array e: ${names}.\n`);

// 16. Crie uma variável com seu nome e idade, e use Template Strings para mostrar:
const myName = "Adriano";
const myAge = 20;
console.log(`Exercicio 16:\nMeu nome e ${myName} e tenho ${myAge} anos.`);
console.log("Exibido com Template Strings.\n");

// 17. Crie uma variável com o preço de um produto e outra com a quantidade. Mostre o total.
const productPrice = 20.33;
const productQuantity = 10;
const totalPrice = productPrice * productQuantity;
console.log(`Exercicio 17:\nO preco do produto e ${productPrice}, quantidade em estoque ${productQuantity}`);
console.log(`Total do valor em estoque e: ${totalPrice.toFixed(2)}.\n`); 
// Limita a duas casas decimais com a funcao toFixed()

// 18. Faça um cálculo de média entre três notas e diga se o aluno passou (nota >= 6).
let note1 = 10.0, note2 = 4.0, note3 = 2.3;
const average = (note1 + note2 + note3) / 3;
console.log(`Exercicio 18:\nA media entre as notas ${note1}, ${note2} e ${note3} e igual a ${average.toFixed(2)}.`);
average >= 6 ? console.log("Aprovado!\n") : console.log("!!!REPROVADO!!!\n");
// Condicao ternaria, funciona como um if-else.
// Traduzindo: "average e maior ou igual a 6? Se sim, exibe 'Aprovado', se nao, exibe 'Reprovado'".

// 19. Verifique se a idade está entre 18 e 60 anos (inclusive).
let bool = true;
console.log(`Exercicio 19:\nA idade ${myAge} esta entre 18 e 60 anos?`);
myAge >= 18 && myAge <= 60 ? console.log(`${bool}.\n`) : console.log(`${!bool}\n`);

// 20. Escreva uma mensagem no console dizendo se um número é par ou ímpar usando %.
const number = 1023021023;
// a Variavel vai receber o valor do calculo com a condicao ternaria. Simples e pratico
const oddOrEven = (number % 2 == 0) ? "par" : "impar"; 
console.log(`Exercicio 20:\nO numero ${number} e ${oddOrEven}.\n`);