#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int least=5001;
        int temp;
        while(low<=high){
            mid=(low+high)/2;
            least=min(nums[mid],least);
            if(nums[mid]>=nums[high] && mid!=high)
            low=mid+1;
            else if(nums[mid]<=nums[low] && mid!= low)
            high=mid-1;
            else
            return min(least,nums[low]);

        }
       return least;
    }

int main(){
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(1);
	nums.push_back(2);
	cout<<findMin(nums);
	
}
