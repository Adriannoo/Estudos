function comprar() {
    let tipoIngresso = document.getElementById('tipo-ingresso').value;
    let quantidade = parseInt(document.getElementById('qtd').value);

    if(isNaN(quantidade) || quantidade <= 0) {
        alert('Insira uma quantidade válida!');
        return;
    }
    
    if(!quantidade) {
        alert('Quantidade inválida!');
        return;
    }

    if(tipoIngresso == 'pista') {
        comprarPista(quantidade);
    } else if(tipoIngresso == 'superior') {
        comprarSuperior(quantidade);
    } else if(tipoIngresso == 'inferior') {
        comprarInferior(quantidade);
    }

    limpar();
}

function comprarPista(quantidade) {
    let pista = parseInt(document.getElementById('qtd-pista').textContent);
    if(quantidade > pista) {
        alert('Quantidade de ingressos para pista indisponível!');
    } else {
        pista = pista - quantidade;
        document.getElementById('qtd-pista').textContent = pista;
        alert('Compra realizada com sucesso!');
    }
}

function comprarSuperior(quantidade) {
    let superior = parseInt(document.getElementById('qtd-superior').textContent);
    if(quantidade > superior) {
        alert('Quantidade de ingressos para cadeira superior indisponível!');
    } else {
        superior = superior - quantidade;
        document.getElementById('qtd-superior').textContent = superior;
        alert('Compra realizada com sucesso!');
    }
}

function comprarInferior(quantidade) {
    let inferior = parseInt(document.getElementById('qtd-inferior').textContent);
    if(quantidade > inferior) {
        alert('Quantidade de ingressos para cadeira inferior indisponível!');
    } else {
        inferior = inferior - quantidade;
        document.getElementById('qtd-inferior').textContent = inferior;
        alert('Compra realizada com sucesso!');
    }
}

function limpar() {
    document.getElementById('qtd').textContent = '';
}