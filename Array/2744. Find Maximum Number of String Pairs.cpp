/**
 * @param {string[]} words
 * @return {number}
 */
var maximumNumberOfStringPairs = function(words) {
  let hashMap = new Map();
  let count = 0;

  for(let i = 0;i<words.length ; i++){

    let str = words[i];
    let sorted = str.split('').sort().join('');
    if(!hashMap.get(sorted)){

    hashMap.set(sorted, 1);
    }

    else {
        count ++;
    }

  }

  return count; 
};
