// Atividade 1 e 2 → Introdução (propriedades, add/remove).
// Atividade 3 → Métodos (funções dentro do objeto).
// Atividade 4 → Array de objetos (simulação do mundo real).
// Atividade 5 → Atualização de valores (como em sistemas de estoque).

// Atividade 1 – Criar um Objeto Simples
// Crie um objeto chamado carro com as propriedades:
// marca, modelo, ano
// Mostre no console o valor de cada propriedade.
// Dica: Use console.log(carro.marca) para imprimir.
console.log("\n---- Atividade 1 ----\n");

const carro = {
    marca: "Toyota",
    modelo: "Corolla",
    ano: 2020
};
console.log(carro.marca, carro.modelo, carro.ano);

// Atividade 2 – Adicionar e Remover Propriedades
// Partindo do objeto carro, adicione a propriedade cor e depois remova a propriedade ano.
// Mostre o objeto atualizado no console.
// Dica:
// carro.cor = "Vermelho";
// delete carro.ano;
console.log("\n---- Atividade 2 ----\n");

carro.cor = "Vermelho";
delete carro.ano;
console.log(carro);

// Atividade 3 – Criar um Método
// Crie um objeto chamado pessoa com as propriedades:
// nome, idade
// E um método apresentar() que retorne uma frase:
// "Olá, meu nome é X e tenho Y anos."
// Mostre o resultado no console chamando o método.
console.log("\n---- Atividade 3 ----\n");

const pessoa = {
    nome: "DOOM Slayer",
    idade: 1032,
    apresentar: function() { return `Eu sou ${this.nome}, tenho ${this.idade} anos e matei todos os demônios!`; }
}

console.log(pessoa.apresentar());

// Atividade 4 – Array de Objetos
// Crie um array de objetos chamado alunos, com 3 objetos representando diferentes alunos (nome, idade, curso).
// Mostre no console apenas o nome do primeiro aluno e o curso do último.
// Dica: Use alunos[0].nome e alunos[2].curso.

console.log("\n---- Atividade 4 ----\n")
const array_de_alunos = [
    { nome: "Adriano", idade: 20, curso: "ADS" },
    { nome: "Luan", idade: 28, curso: "ADS" },
    { nome: "Albert Einstein", idade: 142, curso: "Fisica Teorica" }
];

for (let i = 0; i < array_de_alunos.length; i++) {
    console.log(array_de_alunos[i]);
}

// Atividade 5 – Alterando Valores do Objeto
// Crie um objeto produto com as propriedades:
// nome, preco, estoque
// Depois, faça:
// Mostre o preço original.
// Altere o preço para um novo valor.
// Diminua o estoque em 1 (como se tivesse vendido um produto).
// Mostre o objeto atualizado
console.log("\n---- Atividade 5 ----\n");

const produto = {
    nome: "Pilha",
    preco: 13.20,
    estoque: 1000
}

console.log("Objeto anigo:\n",produto);

produto.preco = 15.00;
produto.estoque = 999;

console.log("Objeto novo:\n", produto);