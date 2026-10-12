export default function trataErros(erro) {
    if (erro.code === 'ENOENT') {
        throw new Error ('Arquivo não encontrado');
        // return 'Arquivo não encontrado'; Aparece apenas mensagem padrão
    } else {
        return 'Erro na aplicação'; 
    }
}
// Stack Trace
