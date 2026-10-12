const estudante = {
    nome: 'Abraham Lincoln',
    idade: 32,
    cpf: '12312312312',
    turma: 'Javascript',
    bolsista: true,
    telefones: ['554599999999', '5545939393993'],
    media: 7,
    estaAprovado: function(mediaBase) {
        return this.media >= mediaBase ? true : false
    } // 'this' faz o contexto desse objeto, aonde quero executar. Dá contexto. Arrow function não consegue lidar com contexto
}

console.log('oi') // 'console.log' Já é um objeto pronto dentro do JS.
console.log(estudante.estaAprovado(8));

// Método é uma função executada dentro de um contexto de um objeto