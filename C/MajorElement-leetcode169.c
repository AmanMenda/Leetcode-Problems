
//Bayor-Moore voting algorithm
int majorityElement(int* nums, int numsSize){
    int count = 0;
    int res = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (count == 0)
            res = nums[i];
        if (nums[i] == res) count++;
        else
            count--;
    }
    return res;
}