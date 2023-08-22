#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> s;
	int arr[]={5,15,10,8,6,12,9,18};
	int n=sizeof(arr)/sizeof(arr[0]);
	stack<int> res;
	res.push(-1);
	s.push(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		while(s.empty()==false && arr[i]>s.top()){
			s.pop();
		}
		if(s.empty()==true)
		res.push(-1);
		else
		res.push(s.top());
		s.push(arr[i]);
	}
	while(res.empty()==false){
		cout<<res.top()<< " ";
		res.pop();
	}

}
