let purchase_value = Number(prompt('5. Type the total purchase value: '));
let discount;

if (isNaN(purchase_value)) {
    throw new Error('The input is not a number.\n');
}

if (purchase_value >= 100) {
    purchase_value *= 0.90;
    discount = '10%';

} else {
    purchase_value *= 0.95;
    discount = '5%';
}

console.log(`The final value with ${discount} discount is: R$ ${purchase_value.toFixed(2)}\n`);