function sortearNumeros() {
    let quantidade = parseInt(document.getElementById('quantidade').value);
    let deNumero = parseInt(document.getElementById('de').value);
    let ateNumero = parseInt(document.getElementById('ate').value);
    let resultado = document.getElementById('resultado');
    let sorteados = [];
    let numero;
    
    for(let i = 0; i < quantidade; i++) {
        numero = obterNumAleatorio(deNumero, ateNumero);

        if(quantidade >= ateNumero || deNumero >= ateNumero) {
            resultado.innerHTML = `<label class="texto__paragrafo">Campos com divergências numéricas. Verifique!</label>`;
            break
        }
        
        while(sorteados.includes(numero)) {
            numero = obterNumAleatorio(deNumero, ateNumero);
        }
        sorteados.push(numero);

        resultado.innerHTML = `<label class="texto__paragrafo">Números sorteados: ${sorteados}</label>`;
    }
    mudarBotaoReiniciar();
    console.log(sorteados);
}

function limparCampo() {
    document.getElementById('quantidade').value = '';
    document.getElementById('de').value = '';
    document.getElementById('ate').value = '';
}

function obterNumAleatorio(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

function mudarBotaoReiniciar() {
    botao = document.getElementById('btn-reiniciar');
    
    if(botao.classList.contains('container__botao-desabilitado')) {
        botao.classList.remove('container__botao-desabilitado');
        botao.classList.add('container__botao');
    } else {
        botao.classList.remove('container__botao');
        botao.classList.add('container__botao-desabilitado');
    }
}

function reiniciar() {
    limparCampo();
    resultado.innerHTML = '<label class="texto__paragrafo">Números sorteados:  nenhum até agora</label>';
    mudarBotaoReiniciar();
}