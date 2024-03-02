const arr = [1,2,3,4,5,6]
let n = arr.length

console.log(solve(arr, 0 , n))
function solve(arr, i , n){
    
    if(i === n-1){
        return true;
    }
    
   return (arr[i] < arr[i+1]) &&  solve(arr,i+1,n);
}

