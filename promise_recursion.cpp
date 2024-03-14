
function promise1 (){
    
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("hello 1 ")
        },1000)
    })
    
}
function promise2 (){
    
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
          resolve("hello 2 ")
        },1000)
    })
    
}
function promise3 (){
    
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("hello 3 ")
        },1000)
    })
}

function promiseRec(functionProm){
    if(functionProm.length == 0) return ;
    
    const currProm = functionProm.shift();
    currProm.then((res)=> console.log(res)).catch((err)=>console.log(err))
    promiseRec(functionProm)
}
promiseRec([promise1(), promise2(), promise3()])
