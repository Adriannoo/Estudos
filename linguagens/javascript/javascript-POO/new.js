function User(nome, email) {
    this.nome = nome;
    this.email = email;

    this.exibirInfos = function() {
        return `${this.nome}, ${this.email}`;
    }
}

// função construtora

// factory function. Retorna um objeto
function criaUser(nome, email) {
    return {
      nome,
      email,
      exibeInfos() {
        return `${nome}, ${email}`
      }
    }
   }

const novoUser = new User('Adriano', 'adrianoramos_junior@hotmail.com');

console.log(novoUser.exibirInfos());


