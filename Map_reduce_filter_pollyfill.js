const arr = [1,2,3,6,9];

// Array.prototype.myMap = function(cb){
    
// const temp = []
    
//     for(let i = 0 ; i<this.length ; i++){
        
//         temp.push(cb(this[i] , i  , this));
//     }
    
//     return temp;
    
    
// }

// const newAr = arr.myMap((val , index, arr)=>{
//     return val*2;
// })

// Array.prototype.myFilter = function(cb){
    
//     const temp = []
    
//     for(let i = 0 ; i<this.length ; i++){
        
//         if(cb(this[i] , i  , this)){
            
//         temp.push(this[i]);
//         }
//     }
    
//     return temp;
    
    
// }

// const newAr = arr.myFilter((val , index, arr)=>{
//     return val > 4;
// })



Array.prototype.myReduce = function(cb,intialValue){
    
    let acc = intialValue;
    
    for(let i = 0 ; i<this.length ; i++){
        
        acc = acc ? cb(acc , this[i] , i , this) : this[i];
        
    }
    
    return acc;
    
    
}

const newval = arr.myReduce((acc , curr , i , arr)=>{
    return acc + curr;
})
console.log(newval)
