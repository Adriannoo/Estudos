/*
1 - Crie um objeto JSON que represente um carro com as propriedades: marca, modelo e ano.
➝ Depois salve no localStorage.
*/

const carro = {
    marca: "honda",
    modelo: "civic",
    ano: "2000"
}

localStorage.setItem("carro", JSON.stringify(carro));

/*
2 - Recupere esse objeto do localStorage e exiba o modelo do carro dentro de uma <p> no HTML.
*/

let car = JSON.parse(localStorage.getItem("carro"));

document.getElementById("paragrafo").innerText = car.modelo;

/*
3 - Monte uma lista (<ul>) com 4 filmes armazenados em JSON.
➝ Mostre apenas os títulos na tela.
*/

const filmes = [
    {nome: "Merda", ano: 1820},
    {nome: "Bosta", ano: 2004},
    {nome: "asdadsad", ano: 313121},
    {nome: "adasd", ano: 3123}
];


/*
4 - Crie um botão "Adicionar ponto" que soma +1 em um placar salvo no localStorage.
➝ O placar deve aparecer dentro de uma <div>.

5 - Faça um sistema que salve o nome de usuário digitado em um input dentro do localStorage e mostre esse nome toda vez que a página for carregada.
*/

