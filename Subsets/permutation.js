/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function(nums) {
    
    let ans = [];

    solve(0 ,ans,nums );
    return ans;
};

function solve( index , ans, nums){
    if(index == nums.length) {
        ans.push(nums.slice());
        return ;
    }

    for(let i =index; i<nums.length ; i++){

        let temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;

        solve(index+1 , ans, nums);

        let temp2 = nums[index];
        nums[index] = nums[i];
        nums[i] = temp2;

    }

    
}
