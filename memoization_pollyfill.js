// function calc(num1 , num2) {
    
    
//     for(let i =0;i<12121211; i++){
        
//     }
//     return num1*num2;
    
// }
// console.time("first");
// console.log(calc(2,4));
// console.timeEnd("first");

// console.time("first");
// console.log(calc(236,4));
// console.timeEnd("first");


function memoize(func){
    
    let res = {};
    
    return function(...args){
        resA= JSON.stringify(...args);
        if(!res[resA]){
            res[resA] = func( ...args);
        }
        return  res[resA];
    }
}

function calc(num1 , num2) {
    
    
    for(let i =0;i<12121211; i++){
        
    }
    return num1*num2;
    
}

const fun = memoize(calc);

console.time("first");
console.log(fun(2,4));
console.timeEnd("first");

console.time("first");
console.log(fun(2,4));
console.timeEnd("first");
