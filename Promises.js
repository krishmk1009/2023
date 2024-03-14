// // var promise = new Promise((resolve,reject)=>{
    
// //     setTimeout(()=>{
// //         const result = false;
        
// //         if(result) resolve("yeah its resolved");
// //         else reject(new Error("rjected huihui"))
// //     },1000)
// // })

// // promise.then((res)=>{
// //     console.log(res)
// // })
// // .catch((err)=>{
// //     console.log(err);
// // })

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

// // PromiseChaining
// // promise1().then((res)=>{
// //     console.log(res);
// //     return promise2();
// // }).then((res2)=>{
// //     console.log(res2);
// //     return promise3();
// // }).then((res3)=>{
// //     console.log(res3);
   
// // }).catch((err)=>{
// //     console.log(err)
// // })

// //Promise.all

// // Promise.all([promise1(), promise2(), promise3()])
// //     .then((results) => {
// //       console.log(results)
// //     })
// //     .catch((err) => {
// //         console.log(err);
// //     });

// //Promise.race
// // Promise.race([promise1(), promise2(), promise3()])
// //     .then((result) => {
// //         console.log("The first promise that resolves:", result);
// //     })
// //     .catch((error) => {
// //         console.log("An error occurred:", error);
// //     });


// //promise.any

// Promise.any([promise1(), promise2(), promise3()])
//     .then((result) => {
//         console.log("The first promise that resolves:", result);
//     })
//     .catch((errors) => {
//         console.log("All promises were rejected:", errors);
//     });

// function job() {
//     return new Promise(function(resolve, reject) {
//         reject();
//     });
// }

// let promise = job();

// promise

// .then(function() {
//     console.log('Success 1');
})

// .then(function() {
//     console.log('Success 2');
// })

// .then(function() {
//     console.log('Success 3');
// })

// .catch(function() {
//     console.log('Error 1');
// })

// .then(function() {
//     console.log('Success 4');
// });


//promise recursion
function promiseRec(functionProm){
    if(functionProm.length == 0) return ;
    
    const currProm = functionProm.shift();
    currPro.then((res)=> console.log(res)).catch((err)=>console.log(err))
    promiseRec(functionProm)
}
promiseRec([promise1(), promise2(), promise3()])
