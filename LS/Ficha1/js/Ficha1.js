let n1=3;
let n2=6;
let n3;
console.log(n1+n2); // 9
console.log(n1+"n3"); // 3n3
console.log(n1+"5"); // 35
console.log(n1+"n2"); // 3n2
console.log(n1+n3); // NaN
console.log(n3); // undf
console.log(`Variavel n1*n2 = ${n1*n2} ( n1=${n1} e n2=${n2})`); //Variavel n1*n2 = 18 ( n1=3 e n2=6)
n3=n1+n2; 
console.log(n3); //9
n3=n1+"---"+n2; 
console.log(n3); //3---6
n3="6"; 
console.log(n1+n3); // 36
console.log(n2===n3); // False
console.log(n2==n3); // True
console.log(n2!==n3); // True
console.log(n2!=n3); // False
console.log(n1++); // 3
console.log('n1='+n1); // n1=4
n1=4; 
console.log(++n1); // 5
console.log('n1='+n1); // n1=5


// 2
const num1=prompt("Especifique o numero 1: ");
const num2=prompt("Especifique o numero 2: ");
const num3=prompt("Especifique o numero 3: ");


let num = [num1, num2, num3]

let maior=0;
for (let i = 0; i <= 3; i++) {
    if (maior<parseInt(num[i])) {
        maior=parseInt(num[i])
    }
    
}
console.log(`O maior entre ${num1}, ${num2} e ${num3} é ${maior}`)