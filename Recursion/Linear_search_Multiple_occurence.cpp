
let ans = [];

const arr = [3,2,1,9,1,18,18,7]
let n = arr.length
let target = 100;
search(arr, 0 , n,target)
console.log(ans)
function search(arr, i , n,target){
    
    if(i === n){
        return ;
    }
    if(arr[i] == target) ans.push(i);
   
    search(arr , i+1 , n , target)
}
