class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
        }
        return res;
    }
};
