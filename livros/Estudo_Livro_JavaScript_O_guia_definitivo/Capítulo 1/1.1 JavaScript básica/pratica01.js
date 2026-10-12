function abs(x) {
    if (x >= 0){
        return x;
    } else {
        return -x;
    }
};


function factorial(n) {
    var product = 1;
    while(n > 1) {
        product *= n;
        n--
    };
    return product;
}

function factorial2(n) { // Outra versão usando um laço diferente
    let i, product = 1;
    for(i=2; i <= n; i++)
        product *= i;
    return product;
}

console.log(factorial(4))
console.log(factorial2(5))