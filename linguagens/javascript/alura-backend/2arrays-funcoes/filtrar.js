const alunos = ['Glande', 'Ana', 'Lixo', 'Xorume'];
const medias = [5, 7.3, 8, 6];

// Método callback também. Ele retorna o resultado da avaliação.
// Filter tem que ser True ou False. Por isso sempre a comparação.
const reprovados = alunos.filter((_, indice) => { 
    return medias[indice] < 7;
});

console.log(reprovados);