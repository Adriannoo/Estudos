const objeto_aluno = {
    nome: "Adriano",
    idade: 20,
    cidade: "Foz do Iguacu",
    curso: "ADS",
    ativo: true,
    apresentar: function() { return `O aluno ${this.nome} tem ${this.idade} anos e o curso e ${this.curso} e o curso esta ${this.ativo}!`;}
};

console.log(objeto_aluno.apresentar());

document.getElementById("h2").innerHTML = objeto_aluno.apresentar();
