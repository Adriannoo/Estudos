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

const admin = {
    nome: 'Deus',
    email: 'd@d.com',
    nascimento: '00-00-0001',
    role: 'admin',
    criarCurso: function() {
        console.log('curso criado');
    }
}

// herança de protótipo. Utiliza um objeto como protótipo para herdar propriedades de outro

Object.setPrototypeOf(admin, user); // define que 'admin' vai usar como 'base' as propriedades do objeto 'user'
admin.criarCurso();
admin.exibirInfos()
