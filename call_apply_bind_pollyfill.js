const car ={
    name:"rols",
    color:"red"
}

function myCar(price, currency){
    
    console.log(this.name+ this.color + price + currency);
}


Function.prototype.myCall = function (context={} , ...args){
    if(typeof this !== "function"){
        return ;
    }
    
    context.fn = this;
context.fn(...args)
    
}
Function.prototype.myApply = function (context={} , args=[]){
    if(typeof this !== "function"){
        return ;
    }
    
    context.fn = this;
    context.fn(...args)
    
}

Function.prototype.myBind  = function(context= {} , ...args){
    
    if(typeof this !== 'function'){
        return;
    }
    
    context.fn = this;
    
    return function(...newArgs){
        return context.fn(...args,...newArgs);
    }
}

const custBind = myCar.myBind(car )

custBind(20,"INR");
