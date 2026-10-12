// 1. Função que calcula a área de um retângulo
function calculate_rectangle_area(base, height) {
    if (typeof base !== 'number' || typeof height !== 'number') { 
        throw new Error('Both base and height must be numbers');
    }

    if (base <= 0 || height <= 0) { 
        throw new Error('Base and height must be positive numbers');
    }

    let area = base * height;
    console.log(`1. The area of the rectangle with base ${base} an height ${height} is ${area}!\n`);
}

calculate_rectangle_area(2, 5);


// 2. Função que verifica se um número é par
function isEven(num) {
    if (typeof num !== 'number') {
        throw new Error ('Input must be a number');
    }
    let isEven = num % 2 === 0 ? console.log(`2. The number ${num} is even!\n`) : console.log(`2. The number ${num} is odd!\n`);
    return isEven;
}

let answer = isEven(239281238);


// 3. Crie uma função que converta Celsius para Fahrenheit
function celsius_to_fahrenheit(celsius) {
    if (typeof celsius !== 'number') {
        throw new Error('Input must be a number');
    }
    let farenheit = (celsius * 9/5) + 32;
    console.log(`3. ${celsius}°C is equal to ${farenheit}°F.\n`);
}

celsius_to_fahrenheit(25);


// 4. Função que retorna a primeira letra do nome
function first_letter(name) {
    if (typeof name !== 'string' || name.length === 0) {
        throw new Error('Input must be a non-empty string');
    } 
    let first_letter = name.charAt(0);
    console.log(`4. The first letter of the name "${name}" is "${first_letter}".\n`);
}

first_letter('Adriano');


// 5. Função que calcula o quadrado de um número
function square(num) {
    if (typeof num !== 'number') {
        throw new Error('Input must be a number');
    }
    let result = num * num;
    console.log(`5. The square of ${num} is ${result}.\n`);
}

square(10);
