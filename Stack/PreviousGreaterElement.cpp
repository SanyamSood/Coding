#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> s;
	int arr[]= {15,10,18,12,4,6,2,8};
	cout<<"-1"<<" ";
	s.push(arr[0]);
	for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
		while(s.empty()==false && arr[i]>s.top()){
			s.pop();
		}
		if(s.empty()==true)
		cout<<-1<<" ";
		else
		cout<<s.top()<<" ";
		s.push(arr[i]);
	}
}
