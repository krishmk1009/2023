function curry(func){
    
    return function curriedFun(...args) {
        if(args.length >= func.length){
        
        return func(...args)
    }
    }
    
    return function(...next){
        return curriedFun(...args , ...next);
    }
    
}

function pri(a,b){
    console.log(a+b);
}

const funPri = curry(pri);

funPri(2,4)
