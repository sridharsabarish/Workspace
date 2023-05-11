// Source : https://leetcode.com/problems/apply-transform-over-each-element-in-array/submissions/
// Getting Started with JS
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    
    for(let i=0;i<arr.length;i++)
        {
            arr[i]=fn(arr[i],i);
        }
    
    return arr;
        
    };