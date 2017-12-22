<?php

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

function inArray($array, $targetVal, $sourceIdx) {
    foreach($array as $idx => $val) {
        if($val === $targetVal && $idx !== $sourceIdx) {
            return $idx;
        }
    }
    return -1;
}

function twoSum($array, $targetVal) {
    foreach($array as $idx => $val) {
        $tmp = $targetVal - $array[$idx];
        $otherIdx = inArray($array, $tmp, $idx);
        if($otherIdx >= 0) {
            return [$idx, $otherIdx];
        }
    }
    return [-1, -1];
}

var_dump(twoSum([3, 2, 4], 6));