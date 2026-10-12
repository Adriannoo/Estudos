alert('Boas vindas ao jogo do número secreto!');

//Variáveis
let numM = 1000;
let numS = parseInt(Math.random() * numM + 1); //parseInt força o número a ser inteiro.
let numE;
let tentativas = 1;
console.log(numS);
//Enquanto número secreto não for igual ao chute
while(numE != numS) {
    numE = prompt(`Digite um número entre 1 à ${numM}`);
    //Chute número secreto
    if(numE == numS) {
        break;
    } else {
        if(numS > numE) {
            alert(`O número secreto é maior que ${numE}!`);
        } else {
            alert(`O número secreto é menor que ${numE}!`);
        }
        //tentativas += 1; ou tentativas = tentativas + 1
        tentativas++;
    }
}
alert(`Parabéns, você acertou, número ${numS}.`);

//Plural, singular palavra tentativa

let pTentativa = tentativas > 1 ? 'tentativas' : 'tentativa'; //Operador ternário
alert(`Foram ${tentativas} ${pTentativa}.`);

// if (tentativas > 1){
//     alert(`Foram ${tentativas} tentativas!`);
// } else {
//     alert(`Foram ${tentativas} tentativa!`);
// }