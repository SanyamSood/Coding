#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(25);
	int res;
	cin>>res;
	sort(vec.begin(),vec.end());
	int i=0;
	int a=0;
	while(res>0){
		if(vec[i]<res){
			res-=vec[i];
			a+=1;
		}
		else{
			i++;
		}
	}
	cout<<a;
}
