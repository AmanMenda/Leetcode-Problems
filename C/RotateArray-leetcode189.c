void rotate(int* nums, int numsSize, int k)
{
    int *res = malloc(sizeof(int)*numsSize);
    
    for (int i = 0; i < numsSize; i++) {
        res[i] = nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        nums[(i + k) % (numsSize)] = res[i];
    }
}