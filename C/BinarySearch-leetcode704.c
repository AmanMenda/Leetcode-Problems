int search(int* nums, int numsSize, int target){
    int l = 0;
    int r = numsSize - 1;
    int m = 0;

    while (l <= r) {
        m = (l + r) / 2;
        if (nums[m] == target)
            return m;
        nums[m] < target ? (l = m + 1) : (r = m - 1);
    }
    return -1;
}