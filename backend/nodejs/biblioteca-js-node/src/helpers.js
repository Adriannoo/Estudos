// Funções helpers

// Object.keys tranforma o bloco em array, utilizando o método de array filter pós, verificando se a palavra repetir, já retornando
function filtraOcorrencias(paragrafo) {
    return Object.keys(paragrafo).filter(chave => paragrafo[chave] > 1);
}

// Monta o texto em string, faz a verificação das palavras duplicadas com filtraOcorrencias e transforma em string com .join(). e retorna a variável let
function montaSaidaArquivo(listaPalavras) {
    let textoFinal = '';
    listaPalavras.forEach((paragrafo, indice) => {
        const duplicadas = filtraOcorrencias(paragrafo).join(', '); // join transforma o array em string.
        textoFinal += `Palavras duplicadas no paragrafo ${indice + 1}: ${duplicadas} \n`;
    })

    return textoFinal;
}

// exporta a função
export { montaSaidaArquivo }
