/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var ans = [];
    for(let i = 0 ; i < arr.length ; i++){
        ans[i] = fn(arr[i] ,i );
    }
    return ans;
};