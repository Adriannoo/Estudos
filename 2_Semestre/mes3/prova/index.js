// Crie um código que, ao clicar em um botão, altere o texto do parágrafo para “Bem-vindo, estudante!”

function alterar_texto() {
    document.querySelector("#mensagem").innerHTML = "Bem-vindo, estudante!";
}

function mudar_cor_fundo() {
    document.querySelector("body").style.backgroundColor = "black";
}

document.querySelector("#btn-cor").addEventListener("click", mudar_cor_fundo);
document.querySelector("#btn").addEventListener("click", alterar_texto);

// Crie um campo de texto e botão que salvem o nome digitado no navegador.
const botao_salvar = document.querySelector("#btn-salvar");

botao_salvar.addEventListener("click", () => {
    let nome = document.querySelector("#nome").value;
    localStorage.setItem("nome", nome);
    document.querySelector("#nome-local").innerHTML = "Nome salvo: " + localStorage.getItem("nome");
})
