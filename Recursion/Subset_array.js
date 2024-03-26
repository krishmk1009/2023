let ans = [];
let arr = [1, 2, 3];
let p = [];

function subset(p, arr) {
    if (arr.length === 0) {
        ans.push([...p]); // Push a copy of p
        return;
    }
    let ele = arr[0];
    subset([...p, ele], arr.slice(1)); // Include the current element
    subset(p, arr.slice(1)); // Exclude the current element
}

subset(p, arr);
console.log(ans);
