import fs from 'fs';
import path from 'path';
import trataErros from '../erros/funcoesErro.js';
import { contaPalavras } from './index.js';
import { montaSaidaArquivo } from './helpers.js';
import { Command } from 'commander';
import chalk from 'chalk';

const program = new Command();

// Biblioteca Commander
program
    .version('0.0.1')
    .option('-t, --texto <string>', 'caminho do texto a ser processado')
    .option('-d, --destino <string>', 'caminho da pasta onde salvar o arquivo de resultado') // Assinalando cada um dos comandos com uma flag '-d'
    .action((options) => {
        const { texto, destino } = options; // Desestruturação

        if (!texto || !destino) {
            console.error(chalk.red('erro: favor inserir caminho de origem e destino'));
            program.help();
            return;
        }
        
        // Biblioteca path nativa do JS, resolve o caminho do arquivo
        const caminhoTexto = path.resolve(texto); 
        const caminhoDestino = path.resolve(destino);

        try {
            processaArquivo(caminhoTexto, caminhoDestino);
            console.log(chalk.green('Texto processado com sucesso'))
        } catch (erro) {
            console.log('ocorreu um erro', erro); 
        }
    })

program.parse(); // Converter

// const caminhoArquivo = process.argv; // Argument values, caminhos dos arquivos em forma de array
// const link =  caminhoArquivo[2];
// const endereco = caminhoArquivo[3]; // Endereço aonde vai ser salvo o arquivo

// Processa o arquivo de texto puxado pelas variáveis de caminho aqui de cima usando try/catch
function processaArquivo(texto, destino) {
    fs.readFile(texto, 'utf-8', (erro, texto) => {      
        try {                                          
            if (erro) throw erro;                       
            const resultado = contaPalavras(texto);
            criaESalvaArquivo(resultado, destino);
        } catch(erro) {
            trataErros(erro);
        }
    })
}

// Cria o arquivo, e salva usando try/catch. Async/Await
async function criaESalvaArquivo(listaPalavras, endereco) {
    const arquivoNovo = `${endereco}/resultado.txt`;
    const textoPalavras = montaSaidaArquivo(listaPalavras);
    try {
        await fs.promises.writeFile(arquivoNovo, textoPalavras);
        console.log('Arquivo criado');
    } catch(erro) {
        throw erro;
    }
}

// Outra forma de escrever o bloco acima, then/catch

// function criaESalvaArquivo(listaPalavras, endereco) {
//     const arquivoNovo = `${endereco}/resultado.txt`;
//     const textoPalavras = JSON.stringify(listaPalavras);

//     fs.promises.writeFile(arquivoNovo, textoPalavras)
//         .then(() => {
//             // Processamento feito com o resultado da promessa
//             console.log('Arquivo criado');
//         }) 
//         .catch((erro) => {
//             throw erro;
//         })
//         .finally(() => console.log('Operação finalizada.'))
// }


