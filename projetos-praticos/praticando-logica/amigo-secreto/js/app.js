let amigos = [];

function adicionar() {
    nome = document.getElementById('nome-amigo');
    if(nome.value == '') {
        alert('Digite um nome válido!');
        return;
    }

    lista = document.getElementById('lista-amigos');

    //Verifica se o elemento está dentro do array! 
    if(amigos.includes(nome.value)) {
        alert('Nome já adicionado!');
        return;
    }

    amigos.push(nome.value);

    if(lista.textContent == '') {
        lista.textContent = nome.value;
    } else {
        lista.textContent = lista.textContent + ', ' + nome.value;
    }
    nome.value = '';

}

function sortear() {
    if(amigos.length <= 3) {
        alert('Adicione pelo menos 4 pessoas!');
        return;
    }
    
    embaralha(amigos);
    let sorteio = document.getElementById('lista-sorteio');

    for(let i = 0; i < amigos.length; i++) {
        if(i == amigos.length - 1) {
            sorteio.innerHTML += amigos[i] + ' --> ' + amigos[0] + '<br>';
        } else {
            sorteio.innerHTML += amigos[i] + ' --> ' + amigos[i + 1] + '<br>';
        }
    }
}

function embaralha(lista) {
    for(let indice = lista.length; indice; indice--) {
        const indiceAleatorio = Math.floor(Math.random() * indice);
        //Atribuição via destructing
        [lista[indice - 1], lista[indiceAleatorio]] = [lista[indiceAleatorio], lista[indice - 1]];
    }
}

function reiniciar() {
    amigos = [];
    document.getElementById('lista-sorteio').textContent = '';
    document.getElementById('lista-amigos').textContent = '';
}