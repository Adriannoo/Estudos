// Objeto
const pessoa = {
    nome: "Adriano",
    idade: 20,
    curso: "ADS"
};

// JSON.stringify(pessoa) - Pega o objeto e transoforma em string, pois local Storage só aceita texto
// localStorage.setItem("pessoa"...) - Guarda esse texto no navegador, com a chave "pessoa", na memória dentro do navegador.
localStorage.setItem("pessoa", JSON.stringify(pessoa)); 

// localStorage.getItem() - pega a string salva no local storage
// JSON.parse - transforma de volta a string em objeto
let dados = JSON.parse(localStorage.getItem("pessoa"));
// Pego o dado salvo e transcrevo no <p> com ID "pessoa" com "innerText"
document.getElementById("pessoa").innerText = dados.nome;

const lista_objeto = [
    {nome: "Carro", preco: 100000},
    {nome: "Computador", preco: 53},
    {nome: "Casa", preco: 100000}
];

lista_objeto.forEach(elements => {
    document.getElementById("lista").innerHTML += `<li>${elements.nome} - ${elements.preco}</li>`;
});