
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize){
    
    *returnSize = 2;
    int *index_array = (int *)malloc(sizeof(int) * (*returnSize));

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                index_array[0] = i;
                index_array[1] = j;
                break;
            }
        }
    }
    return index_array;
}