export default class User { // classe e o construtor da classe
    #nome
    #email
    #nascimento
    #role
    #ativo  // encapulamento
    constructor(nome, email, nascimento, role, ativo = true) {
        this.#nome = nome
        this.#email = email
        this.#nascimento = nascimento
        this.#role = role || 'estudante'
        this.#ativo = ativo    
    }
    // método acessor, getter e setter
    get nome() { // método que da acesso a uma propriedade, acessor
        return this.#nome;
    }

    set nome(novoNome) {
        if (novoNome === '') {
            throw new Error('formado do nome inválido');
        }
        this.#nome = novoNome;
    }

    get email() {
        return this.#email;
    }

    get nascimento() {
        return this.#nascimento;
    }

    get role() {
        return this.#role;
    }

    get ativo() {
        return this.#ativo;
    }

    // #montaObjUser() {
    //     return ({
    //         nome: this.#nome,
    //         email: this.#email,
    //         nascimento: this.#nascimento,
    //         role: this.#role,
    //         ativo: this.#ativo,
    //     })
    // }

    exibirInfos() { // overload
        if (this.role === 'estudante') {
            return `dados estudante: ${this.nome}, ${this.email}`;
        }
        if (this.role === 'admin') {
            return `dados admin: ${this.nome}, ${this.role}`; 
        }
        if (this.role === 'docente') {
            return `dados docente ${this.nome}, ${this.email}`;
        }
    }

    static exibirInfosPadrao(nome, email) { // método estático
        return `${nome}, ${email}`;
    }

}

// export default para quando tem outras funções na mesma visse versa
// Exportação de módulos. npm init -y "type": "module"

// console.log(User.prototype.isPrototypeOf(novoUser)); // herança de protótipo. é prototipo de novoUser

