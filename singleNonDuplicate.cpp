class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        if(nums.size()==1 || nums[0]!=nums[1])
        return nums[0];
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid+1]!=nums[mid] && nums[mid-1]!=nums[mid])
            return nums[mid];
            if(mid==0 && nums[mid+1]!=nums[mid]|| mid==nums.size()-1 && nums[mid-1]!=nums[mid])
            return nums[mid];

            if(mid%2==0){
                if(nums[mid-1]==nums[mid])
                high=mid-1;
                else
                low=mid+1;
            }
            else{
                if(nums[mid-1]==nums[mid])
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return -1;
    }
};
