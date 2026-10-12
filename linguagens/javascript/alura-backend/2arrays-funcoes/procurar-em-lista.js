const alunos = ['João', 'Juliana', 'Caio', 'Ana'];
const medias = [10, 8, 7.5, 9];
const lista = [alunos, medias];

function exibeNomeENota(nome) {
    if (lista[0].includes(nome)) { // Aqui retorna booleano.
        const [alunos, medias] = lista; // Desestruturando o array criando duas variáveis.
        const indice = alunos.indexOf(nome); // indexOf retorna o índice da primeira ocorrência. Vai retornar 1 caso o nome for João.
        const mediaAluno = medias[indice];
        console.log(`${nome} tem a média ${mediaAluno}!`);
    } else {
        console.log('Estudante não existente!');
    }
}

console.log(lista[0].indexOf('Caio'));
exibeNomeENota('João');
exibeNomeENota('Glande');