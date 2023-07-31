#include<iostream>
#include<vector>
vector <int> productExceptSelf(vector<int>& nums) {
        int temp=1;
        int zero=0;
        int a;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            temp*=nums[i];
            else
            zero++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(zero>0)
                res.push_back(0);
                else
                res.push_back(temp/nums[i]);
            }
            if(nums[i]==0){
                if(zero>1)
                res.push_back(0);
                else
                res.push_back(temp);
            }
            


        }
        return res;

int main(){
	vector<int> nums;
}
