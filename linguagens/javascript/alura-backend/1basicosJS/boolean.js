const estudante = 'Jack';
const estaAprovado = true;

//Qualquer comparação feita "===", será True/False.
if (estaAprovado) {
    console.log('Aprovado!');
} else {
    console.log('Reprovado!');
}

if (estudante === 'Jack') { //True, pois está exatamente como na variável.
    console.log(`Olá ${estudante}.`);
} else {
    console.log('Lixo');
}