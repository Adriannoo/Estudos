import User from "./User.js";
import Admin from "./Admin.js";
import Docente from "./Docente.js";

const novoUser = new User('Adriano', 'adriano@gmail.com', '11-01-2004');

const novoAdmin = new Admin('Deus', 'deus@gmail.com', '01-01-0000');

const novoAdmin2 = new Admin('Rodolfo', 'r@r.com', '11-11-2000');

const novoDocente = new Docente('Thanatos', 't@gmail.com', '23-02-1234');

const dados = User.exibirInfosPadrao('Bict', 'b@b.com'); // metodo estático
console.log(dados);

console.log(novoAdmin.exibirInfos());
console.log(novoAdmin2.exibirInfos());
console.log(novoUser.exibirInfos());
console.log(novoDocente.exibirInfos());


/* novoUser.nome = 'Albert'; utilizando setter
*
* console.log(novoUser.nome); utilizando getter
* console.log(novoAdmin.nome);
*
* sem encapsulamento, propriedade privada
* novoUser.nome = 'Glânde'; // aqui ele criou uma propriedade nova 
* console.log(novoUser.nome);
*/