
const arr = [1,2,3,4,5,6]
let n = arr.length
let target = 9;

console.log(search(arr, 0 , n,target))
function search(arr, i , n,target){
    
    if(i === n-1){
        return -1;
    }
    if(arr[i] == target) return i;
   
   return search(arr , i+1 , n , target)
}
