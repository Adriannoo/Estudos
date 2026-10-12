function point(x, y) {
    this.x = x;
    this.y = y;
}

let p =  new point(1, 1);   // O ponto geométrico(1, 1) define métodos  para objetos Point atribuindo-os ao objeto
point.prototype.r = function() { // prototype associado à função construtora.
    return Math.sqrt(
        this.x * this.x +
        this.y * this.y
    );
};

console.log(p.r())
