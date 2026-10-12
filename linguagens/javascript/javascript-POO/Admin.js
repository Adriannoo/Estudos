import User from './User.js';
// herança de classe

export default class Admin extends User { // herdar propriedades de User
    constructor(nome, email, nascimento, role = "admin", ativo = 'true') {
        // super classe de 'Admin' é 'User'
        super(nome, email, nascimento, role, ativo) // passo os parâmetros que quero reutilizar //SUPERCLASSE
    }

    // exibirInfos() {
    //     const infos = super.exibirInfos(); //override
    //     return `admin - ${infos}`;
    // }

    criarCurso(nomeCurso, qtdVagas) { // string, number
        return `curso ${nomeCurso} criado com ${qtdVagas} vagas.`; // string
    }

}

// console.log(novoAdmin.exibirInfos());
// console.log(novoAdmin.criarCurso('Javascript', 42));