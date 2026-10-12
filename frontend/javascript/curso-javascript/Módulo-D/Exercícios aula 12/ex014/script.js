function carregar() {
    let msg = document.getElementById('msg')
    let img = document.getElementById('imagem')
    let data = new Date()
    let hora = data.getHours()
    let min = data.getMinutes()
    msg.innerHTML = `Agora são ${hora} horas, e ${min} minutos!`  
    if (hora >= 6 && hora < 12) {
        // Bom Dia!
        img.src = 'fotomanha.png'
        document.body.style.background = '#dcb076'
    } else if (hora >= 12 && hora < 18) {
        // Boa Tarde!
        img.src = 'fototarde.png'
        document.body.style.background = '#3a4a6b'
    } else {
        // Boa Noite!
        img.src = 'fotonoite.png'
        document.body.style.background = '#151721'
    }
}

