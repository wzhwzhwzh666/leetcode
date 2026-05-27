int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0)return 0;
    int i=0,j=1;
    while(j<numsSize){
        if(nums[i]==nums[j]){
            j++;
        }else{
            i++;
            nums[i]=nums[j];
            j++;
        }

    }
    return i+1;
}