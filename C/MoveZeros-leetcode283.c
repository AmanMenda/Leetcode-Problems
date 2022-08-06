void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void moveZeroes(int* nums, int numsSize)
{
    for (int zero = 0, curr_elt = 0; curr_elt < numsSize; curr_elt++) {
        if (nums[curr_elt] != 0)
            swap(&nums[zero++], &nums[curr_elt]);
    }
}