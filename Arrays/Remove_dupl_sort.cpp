//DSA
//DAY 11
//Problem: Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        int size=nums.size();
        if(size==0)
            return 0;
        for(int i=0;i<size-1;i++){
            if(nums[i]!=nums[i+1])
                nums[index++]=nums[i+1];
        }
        return index;
    }
};
