let amigo = {
    nome: 'Ows', 
    sexo: 'Masculino', 
    peso: 85.2,
    engordar(p=0) {
        console.log('Engordou')
        this.peso += p  
}}

amigo.engordar(5)
console.log(`${amigo.nome} pesa ${amigo.peso}Kg`)