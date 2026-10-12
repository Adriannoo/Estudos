const notaPrimeiroBi = 9;
const notaSegundoBi = 5.2;
const notaTerceiroBi = 7;
const notaQuartoBi = 10;


let media = (notaPrimeiroBi + notaSegundoBi + notaTerceiroBi + notaQuartoBi) / 4;

if(media >= 7) {
    media += media * 0.1;
}

console.log(`A média é ${media.toFixed(2)}!`);