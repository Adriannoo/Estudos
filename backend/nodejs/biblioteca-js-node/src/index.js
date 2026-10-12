// Criar um array de palavras
// Contar as ocorrências
// Montar um objeto com o resultado

// Exporta a função, e chama a function que conta as palavras duplicadas
export function contaPalavras(texto) {
    const paragrafos = extraiParagrafos(texto);
    const contagem = paragrafos.flatMap((paragrafo) => {
        if (!paragrafo) return [];
        return verificaPalavrasDuplicadas(paragrafo);
    })
    return contagem;
}

// flatMap 'achata array'
// [1, 2, [3, 4]]
// [1, 2, 3, 4]

function extraiParagrafos(texto) {
    return texto.toLowerCase().split('\n');
}

// Troca os símbolos por nada ''
function limpaPalavras(palavra) {
    return palavra.replace(/[.,\/#!$%\^&\*;:{}=\-_`~()]/g, '');
}

// Pega o array de palavras, espaça elas, entra em um loop forEach, limpa utilizando a função acima, e guarda no bloco resultado a palavra limpa no índice da palavra, mais a quantidade que a palavra aparece.
function verificaPalavrasDuplicadas(texto) {
    const listaPalavras = texto.split(' ');
    const resultado = {};
    listaPalavras.forEach(palavra => {
        if (palavra.length >= 3) {
            const palavraLimpa = limpaPalavras(palavra);
            resultado[palavraLimpa] = (resultado[palavraLimpa] || 0) + 1
        }
    })
    return resultado;
}

