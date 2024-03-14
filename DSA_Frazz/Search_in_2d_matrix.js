/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    
    for(let i =0;i<matrix.length ; i++){
        
        const last = matrix[i][matrix[i].length-1];

            if(target > last ){
               continue;
            } 

        for(let j = 0;j<matrix[i].length ; j++){
            
            if(target == matrix[i][j]) return true;
        }

    }
    return false;
};
