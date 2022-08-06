int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int* arr = malloc(sizeof(int)*numsSize);
    *returnSize = numsSize;
    int r = numsSize-1, l = 0;
    int ptr = numsSize-1;

    while ((l <= r) && (ptr >= 0)) {
        if (pow(nums[r],2) >= pow(nums[l],2))
            arr[ptr] = pow(nums[r--], 2);
        else
            arr[ptr] = pow(nums[l++], 2);
        ptr--;
    }
    return arr;
}