/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function (words, separator) {

    let ans = [];

    for (let i = 0; i < words.length; i++) {

        let str = words[i];
        let temp = "";

        for (let j = 0; j < str.length; j++) {

            if (str[j] != separator) {
                temp += str[j];
            }

            else {
                if (temp.length != 0) {
                    ans.push(temp);
                    temp= "";
                }
            }

        }
        if (temp.length != 0) {
                    ans.push(temp);
                    temp= "";
                }



    }
    return ans;
};
