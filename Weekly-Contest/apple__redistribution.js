/**
 * @param {number[]} apple
 * @param {number[]} capacity
 * @return {number}
 */
var minimumBoxes = function(apple, capacity) {
    let sum = apple.reduce((acc, curr)=> acc+ curr , 0);
    let ans = 0;
    capacity.sort((a,b) =>a-b);
    
    
    for(let i = capacity.length-1 ; i>=0 ; i--){

        if(sum <=0) break;
        
        sum -= capacity[i];
        ans ++;
        
    }
    
    return ans;
};
