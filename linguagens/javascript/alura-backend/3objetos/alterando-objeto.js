const estudante = {
    nome: 'Abraham Lincoln',
    idade: '32',
    cpf: '12312312312',
    turma: 'Javascript'
}

estudante.telefone = '55459999999';
console.log(estudante.telefone);
console.log(estudante);

delete estudante.turma; // delete é booleano

estudante.nome = 'Monstro Tanatos';
console.log(estudante);

const objeto = {};

objeto.nome = 'blabla';

console.log(objeto);

const cliente = {
    nome: 'Andre',
    idade: 32,
    cpf: '1122233345',
    email: 'andre@dominio.com',
  };
  
  console.log(
    `O nome do cliente é ${cliente['nome']} e essa pessoa tem ${cliente['idade']} anos.`
  );
  
  const chaves = ['nome', 'idade', 'cpf', 'email', 'altura'];
  
  chaves.forEach((chave) => {
    console.log(`A chave ${chave} tem valor ${cliente[chave]}`);
  });
  