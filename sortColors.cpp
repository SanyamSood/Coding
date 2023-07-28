#include<iostream>
#include<vector>
using namespace std;

vector<int> sortColors(vector<int>& nums) {
    int red=0,white=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
        red++;
        else if(nums[i]==1)
        white++;
    }
    for(int i=0;i<red;i++){
        nums[i]=0;
    }
    for(int i=red;i<red+white;i++){
        nums[i]=1;
	}
    for(int i=red+white;i<nums.size();i++){
        nums[i]=2;
	}
	return nums;
}

int main(){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(0);
	sortColors(nums);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
}
