let num = [1, 6, 2, 3, 5, 2, 5]
num.push(4)
num.sort()

/* for(let c = 1; c < num.length; c++) {
    console.log(`A posição ${c} tem o valor ${num[c]}!`)
} */

for (let c in num) {
    console.log(`A posição ${c} tem o valor ${num[c]}!`)
} // Muito melhor, parece For c in range em python!
