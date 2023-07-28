#include<iostream>
#include<vector>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        if(nums.size()!=1){
        k=k%nums.size();
        vector<int> temp;
        for(int i=nums.size()-k;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i=nums.size()-k -1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
        }
    }
int main(){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(0);
	rotate(nums,2);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
}
