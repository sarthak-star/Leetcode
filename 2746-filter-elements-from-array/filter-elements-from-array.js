/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var ans = [];
    for(let i = 0 ; i < arr.length ; i++){
        let temp = fn(arr[i] , i);
        if(Boolean(temp)) ans.push(arr[i]);
    }
    return ans;
};