/**
 * 
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * 
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 */

function inArray(array, targetVal, sourceIdx) {
    var arrayLen = array.length;
    for(var i = 0; i < arrayLen; i++) {
        if(array[i] === targetVal && sourceIdx !== i) {
            return i;
        }
    }
    return -1;
}

function twoSum(array, targetVal) {
    var arrayLen = array.length;
    for(var i = 0; i < arrayLen; i++) {
        var tmp = targetVal - array[i];
        var secondIdx = inArray(array, tmp, i);
        if(secondIdx >= 0) {
            return [i, secondIdx];
        }
    }
    return [-1, -1];
}

console.log(twoSum([3, 2, 4], 6));