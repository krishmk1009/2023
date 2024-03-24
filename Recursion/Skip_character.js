let str = "abccbad";
let ans = "";

// skip(str, ans);

// function skip(str, ans) {
//     if (str.length === 0) {
//         console.log(ans);
//         return;
//     }

//     let ch = str[0];

//     if (ch === 'a') {
//         skip(str.substr(1), ans);
//     } else {
//         skip(str.substr(1), ans + ch);
//     }
// }

function skip(str){
    if (str.length === 0) {
       
        return "";
    }
    let ch = str[0];
    
    if (ch === 'a') {
        return skip(str.substr(1));
    } else {
       return ch +  skip(str.substr(1));
    }
}

console.log(skip(str))
