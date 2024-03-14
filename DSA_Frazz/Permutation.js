/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function(nums) {
    const ans = [];
    solve(0 , nums, ans);
    return ans;
};

function solve(index , nums , ans){

    if(index === nums.length){
        ans.push(nums.slice())
        return;
    }

    for(let i = index;i<nums.length ; i++){

        let temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;

        solve(index+1 , nums, ans);

        let temp2 = nums[index];
        nums[index] = nums[i];
        nums[i] = temp2;
    }

}
