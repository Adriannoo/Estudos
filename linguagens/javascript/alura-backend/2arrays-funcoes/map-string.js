const nomes = ['Glande', 'Rojão', 'peido', 'ALEXANDRE'];
let nomePessoa = 'Sergio';
const nomeLoko = nomePessoa[2].toUpperCase(); // Interessante

const nomesPadronizados = nomes.map((nome) => nome.toUpperCase());

console.log(nomePessoa);
console.log(nomeLoko);