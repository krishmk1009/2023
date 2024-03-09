/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsetsWithDup = function(nums) {
    nums.sort((a,b)=> a-b)
    const ans = [];
    ans.push([]);

    let start = 0;
    end = 0;

    for(let i = 0;i<nums.length;i++){
        start = 0;

        if(i>0 && nums[i] === nums[i-1]){
            start = end+1;
        }

        end = ans.length -1;

        for(let j = start;j< end+1 ; j++){

            ans.push([...ans[j] , nums[i]])
        }
    }
    return ans;
};
