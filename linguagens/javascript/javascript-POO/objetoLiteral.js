const user = {
    nome: 'Adriano',
    email: 'adrianoramos_junior@hotmail.com',
    nascimento: '11-01-2004',
    role: 'estudante',
    ativo: true,
    exibirInfos: function() {
        console.log(this.nome, this.email);
    }
}

// arrow function não é a mesma que uma declaração de função
const exibir = function() {
    console.log(this.nome, this.email);
}

// bind para ligar o valor de um determinado contexto 
const exibirNome = exibir.bind(user); // Para dar contexto à função

exibirNome();

exibir.call(user); // call passa valores e parâmetros