const pokemonsJSON = `
    [{"nome": "Bulbassaur"},
    {"nome": "Charmander"},
    {"nome": "Squirtle"}]`;

let pokemons = JSON.parse(localStorage.getItem("pokemons")) || JSON.parse(pokemonsJSON);

function salvar_pokemon() {
    localStorage.setItem("pokemons", JSON.stringify(pokemons));
}

function listar_pokemons() {
    const ul = document.getElementById("lista-pokemons");
    ul.innerHTML = "";

    pokemons.forEach(pokemons => {
        const li = document.createElement("li");
        li.textContent = pokemons.nome;
        ul.appendChild(li);
    });
}

function adicionar_pokemon() {
    const input = document.querySelector("input");
    const nome = input.value;

    if (nome) {
        pokemons.push({ nome });
        salvar_pokemon();
        listar_pokemons();
        input.value = "";
    }
}

function remover_ultimo_pokemon() {
    pokemons.pop(); // Remove o ultimo elemento 
    salvar_pokemon();
    listar_pokemons();
}

listar_pokemons();