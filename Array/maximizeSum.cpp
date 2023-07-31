class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maximum=0;
        int pos;
        int ad=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maximum){
                maximum=nums[i];
                pos =i;
            }
        }
        nums[pos]+=k;
        for(int i=1;i<k;i++){
            ad+=i;
        }
        return maximum*k +ad;
    }
};
