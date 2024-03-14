/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let curr = 0;
    let finalSum = Number.MIN_SAFE_INTEGER;

    for(let i =0;i<nums.length ; i++){

        curr+= nums[i];

        if(curr>finalSum){
            finalSum = curr;
        }
        if(curr<0){
            curr = 0;
        }
    }
    return finalSum;
};
