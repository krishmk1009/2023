/**
 * @param {number[]} happiness
 * @param {number} k
 * @return {number}
 */
var maximumHappinessSum = function(happiness, k) {
    
    happiness.sort((a,b)=>b-a);

    let i =0;
    let sum = 0;

    while(k--){

        let temp = Math.max(happiness[i] - i ,0);
        sum+= temp;
        i++;
    }
    return sum;
};


