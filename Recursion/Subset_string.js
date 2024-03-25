let ans = [];
let str = "abc";
let p ="";

function subset(p , str){
    
    if(str.length ===0){
        ans.push(p);
        return;
    }
    let ch = str[0];
    
    subset(p+ch , str.substr(1))
    subset(p, str.substr(1))

}

subset(p , str)

console.log(ans)
