/* const doSome = (n1, n2) => n1 * n2;

function doSomething(n) {
    return n.map(doSome);
}
//console.log(doSomething([3, 2, 1, 0]));

let a = [1, 4];
let b = [...a];
a.push(5);
//console.log(b);

function doAnother(c, d) {
    c.push(d);
}
let x = [1, 2, 3];
doAnother(x, ...x);
//console.log(x);

let x = 0;
const test = function (x = 1) {
    //console.log(x);
    x = 2;
};
test(x);
//console.log(x);
test = "exame!";
console.log(test); */

function doSomething1({ one, two, three }) {
    console.log(one + two + three);
}
function doSomething2(props) {
    console.log(props.one + props.two + props.three);
}
function doSomething3(props) {
    const { one, two, three } = props;
    console.log(one + two + three);
}
let obj = { one: 1, two: 2, three: 3 }
doSomething1(obj);
doSomething2(obj);
doSomething3(obj);