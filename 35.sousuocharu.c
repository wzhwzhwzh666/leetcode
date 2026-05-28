int searchInsert(int* nums, int numsSize, int target) {
    if(numsSize==0)return 0;
    int j;
    for(int j=0;j<numsSize;j++){
        if(nums[j]==target){
            return j;
        }
   if(nums[j]>target){
        return j;
    }
    }
    return j;
    }