let listaValores = [];
limpar();

function adicionar() {
    //Quantidade de produtos.
    let quantidade = parseInt(document.getElementById('quantidade').value);
    
    //Pega o produto selecionado, separa o valor e o nome do produto e soma.
    let produto = document.getElementById('produto').value;
    let nomeProduto = produto.split('-')[0];
    let valorProduto = produto.split('R$')[1];
    let precoProdutos = quantidade * valorProduto;
    
    //Verificando se os valores são inputs são válidos.
    if(!produto || produto.trim() === '') {
        alert('Selecione um produto válido!');
        return;
    }

    if(isNaN(quantidade) || quantidade <= 0) {
        alert('Insira uma quantidade válida!');
        return;
    }

    //Mostrando os produtos na tela.
    let listaProdutos = document.getElementById('lista-produtos');
    listaProdutos.innerHTML += `<section class="carrinho__produtos__produto">
    <span class="texto-azul">${quantidade}x</span> ${nomeProduto} <span class="texto-azul">R$${precoProdutos}</span>
    </section>`;
    
    //Calculando o total.
    listaValores.push(precoProdutos);
    let soma = 0;
    for(let i = 0; i < listaValores.length; i++) {
        soma += listaValores[i];
    }
    let campoTotal = document.getElementById('valor-total');
    campoTotal.innerHTML = `R$${soma},00`;

    document.getElementById('quantidade').value = '';
}

function limpar() {
    document.getElementById('lista-produtos').innerHTML = '';
    document.getElementById('valor-total').textContent = 'R$0,00';
    listaValores = [];
}