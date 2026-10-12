let titulo = document.querySelector('h1');
titulo.innerHTML = 'Hora do Desafio';

// Interagindo com o HTML pelo Javascript.
function mensagemConsole() {
    console.log('O botão foi clicado.');
}

// Apertar o botão alert para dizer tal mensagem.
function alerta() {
    alert('Eu amo JS!');
}

// Apertar o botão prompt para perguntar a cidade e dizer tal mensagem.
function cidade() {
    let cidade = prompt('Fale uma cidade do Brasil:');
    alert(`Estive em ${cidade} e lembrei de você.`);
}

// Apertar o botão soma e fazer a soma de 2 números.
function soma() {
    let num1 = Number(prompt('Digite um número:')); // sem o Number, fica uma string. 2 + 2 = 22 ??
    let num2 = Number(prompt('Digite outro número:'));
    let soma = num1 + num2;
    alert(`A soma do número ${num1} e do ${num2} é ${soma}!`);
}