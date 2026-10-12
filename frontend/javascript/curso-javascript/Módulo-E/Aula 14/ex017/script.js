function tabuada() {
    let num = document.getElementById('num')
    let res = document.querySelector('div#res')
    let c = Number()
    c = 1
    if(num.value.length == 0) {
        alert('ERRO! Forneça os dados corretamente.')
        res.innerHTML = 'Digite um valor para ver sua tabuada!'
    } else {
        res.innerHTML = `Tabuada do número ${num.value}: <br>`
        let n = Number(num.value)
        while(c <= 10) {
            res.innerHTML += `${c} x ${n} = ${c * n}<br>`
            c++
        }
    }
}