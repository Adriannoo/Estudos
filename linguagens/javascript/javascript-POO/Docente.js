import User from './User.js';

export default class Docente extends User { // herdar propriedades de User
    constructor(nome, email, nascimento, role = "docente", ativo = 'true') {
        super(nome, email, nascimento, role, ativo);
    }

    aprovarEstudantes(nomeEstudante, curso) {
        return `estudante ${nomeEstudante} foi aprovado no curso ${curso}, responsável ${this.nome}.`; // não são obrigatórios, métodos e construtores.
    }
}

// classes não são hoisted

// console.log(novaDocente.aprovarEstudantes('Arguile', 'Javascript'));