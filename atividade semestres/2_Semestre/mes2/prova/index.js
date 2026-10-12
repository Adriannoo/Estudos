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

if (!dados) dados = 0; // Verifica se há dado salvo. Obrigatório!

// Pego o dado salvo e transcrevo no <p> com ID "pessoa" com "innerText"
document.getElementById("pessoa").innerText = dados.nome;


fetch("produtos.json") // Faz uma requisição HTTP
    .then(response => response.json()) // Converto eles para JSON
    .then(lista_objeto => { // Recebe os dados já convertidos
        // Percorre todo os elementos do objeto e transcreve dentro da lista ul, incrementando o li.
        lista_objeto.forEach(elements => { 
            document.getElementById("lista-local").innerHTML += `<li>${elements.nome} - ${elements.preco}</li>`;
        });
    })
    .catch(error => console.error('Error', error));
