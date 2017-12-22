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

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 3
#define INDEX_SIZE 2

int inArray(const int *nums, int numsSize, int targetNum, int sourceIndex);
void printArray(const int *nums, int numsSize);
int* twoSum(const int* nums, int numsSize, int target);

int
main(void) {
    int arr[ARRAY_SIZE] = {3, 2, 4};
    int target = 6;
    int *result = twoSum(arr, 3, target);
    printArray(result, INDEX_SIZE);
}

// check whether an element is in an array
int 
inArray(const int *nums, int numsSize, int targetNum, int sourceIndex) {
    int result = -1;
    int i;
    
    for(i = 0; i < numsSize; i++) {
        if(targetNum == nums[i] && i != sourceIndex) {
            result = i;
            break;
        }
    }
    
    return result;
}

// print array elements
void
printArray(const int *nums, int numsSize) {
    int i;
    for(i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int* 
twoSum(const int* nums, int numsSize, int target) {
    int *result;
    int i = 0;
    
    result = (int *)malloc(INDEX_SIZE * sizeof(int));
    int firstIndex = 0;
    int secondIndex = 0;
    int tempIndex;
    
    for(i = 0; i < numsSize; i++) {
        firstIndex = i;
        if((tempIndex = inArray(nums, numsSize, target - nums[i], i)) >= 0) {
            secondIndex = tempIndex;
            break;
        }
    }
    
    *result = firstIndex;
    *(result+1) = secondIndex;
    
    return result;
}