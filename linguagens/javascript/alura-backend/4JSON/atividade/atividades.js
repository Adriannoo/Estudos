// const dados = require('./dados.json');

// console.log(dados);

// const produto = {
//     id: 1,
//     nome: "Camiseta",
//     preco: 25.99
// }

// const stringProduto = JSON.stringify(produto);

// console.log(stringProduto);

// const animais = require('./animais.json');
// console.log(animais);
// JSON.stringify(animais);
// console.log(animais);


// const biblioteca = [
//     { id: 1, titulo: "O Senhor dos Anéis", autor: "J.R.R. Tolkien", anoPublicacao: 1954 },
//     { id: 2, titulo: "Dom Quixote", autor: "Miguel de Cervantes", anoPublicacao: 1605 },
//     { id: 3, titulo: "1984", autor: "George Orwell", anoPublicacao: 1949 }
// ]

// function encontrarLivroPorId(id) {
//     return biblioteca.find((livro) => livro.id === id) || null;
// }

// const livro1 = encontrarLivroPorId(1);
// console.log(livro1);

// const livro2 = encontrarLivroPorId(4);
// console.log(livro2);


// const catalogoFilmes = [
//     { id: 1, titulo: "Matrix", diretor: "Lana Wachowski", anoLancamento: 1999 },
//     { id: 2, titulo: "Jurassic Park", diretor: "Steven Spielberg", anoLancamento: 1993 },
//     { id: 3, titulo: "Inception", diretor: "Christopher Nolan", anoLancamento: 2010 }
// ]

// function filtrarFilmesPorAno(ano) {
//     const filmeAno = catalogoFilmes.filter((filme) => filme.anoLancamento === ano);
//     return console.log(filmeAno);
// }

// filtrarFilmesPorAno(1993);


const listaProdutos = [
    { id: 1, nome: "Camiseta", preco: 25.99 },
    { id: 2, nome: "Calça Jeans", preco: 49.99 },
    { id: 3, nome: "Tênis", preco: 79.99 },
    { id: 4, nome: "Boné", preco: 15.99 }
]

function filtrarOrdenarProdutosPorPreco(lista, propriedade) {
    return lista.sort((a, b) => {
        if (a[propriedade] < b[propriedade]) return -1;
        if (a[propriedade] > a[propriedade]) return 1;
    })
}

const listaOrdenadaPreco = filtrarOrdenarProdutosPorPreco(listaProdutos, 'preco');

console.log(listaOrdenadaPreco);
