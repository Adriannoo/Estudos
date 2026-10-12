let listaNumSor = [];
let limiteNum = 100;
let numSecreto =  gerarNum();
let tentativas = 1;

// Função que chama a tag do HTML para modificar texto na tela. 
function exibirTexto(tag, texto) { //Primeiro parâmetro, a tag, o segundo, o texto.
    let campo = document.querySelector(tag);
    campo.innerHTML = texto;
    responsiveVoice.speak(texto, 'Brazilian Portuguese Female', {rate:1.2});
}

function gerarNum() { //Função que retorna um número aleatório.
   let numAlea = parseInt(Math.random() * limiteNum + 1);
   let qntNumLista = numAlea.length; 
   if(qntNumLista == limiteNum) {
        listaNumSor = [];
   }
   if(listaNumSor.includes(numAlea)) {
        return gerarNum();
   } else {
        listaNumSor.push(numAlea);
        console.log(listaNumSor);
        return numAlea;
   }
}

function limparCampo() { //Limpar campo escrito.
    chute = document.querySelector('input');
    chute.value = '';
}

function reiniciarJogo() { //Reinicia o jogo
    numSecreto = gerarNum();
    limparCampo();
    tentativas = 1;
    exibirMsgInicial();
    document.getElementById('reiniciar').setAttribute('disabled', 'true');
}
 
function exibirMsgInicial() { //Exibe as mensagens na tela
    exibirTexto('h1', 'Número Secreto');
    exibirTexto('p', `scolha um número entre 1 e ${limiteNum}`);
}

exibirMsgInicial();

// Função que verifica o valor do input com o número secreto e manda a msg na tela.
function verificarChute() {
    let chute = document.querySelector('input').value;
    if(chute == numSecreto) {
        let plvTentativa = tentativas > 1 ? 'tentativas' : 'tentativa';
        let msgTentativa = `Parabéns, você acertou o número secreto com ${tentativas} ${plvTentativa}.`
        exibirTexto('h1', 'Você acertou!');
        exibirTexto('p', msgTentativa);
        document.getElementById('reiniciar').removeAttribute('disabled'); //Pegando o elemento pelo ID para remover atributo. 
    } else {
        if(chute > numSecreto) {
            exibirTexto('p', `O número secreto é menor que ${chute}`);
        } else {
            exibirTexto('p', `O número secreto é maior que ${chute}`);
        }
        tentativas++;
        limparCampo();
    }
    console.log(numSecreto);
}