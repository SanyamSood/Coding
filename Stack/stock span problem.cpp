#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> s;
	int arr []={60,10,20,15,35,50};
	s.push(0);
	cout<<"1"<<" ";
	for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
		while(s.empty()==false && arr[s.top()]<=arr[i]){
			s.pop();
		}
		if(s.empty()==true)
			cout<<i+1<<" ";
		else
		cout<<i-s.top()<<" ";
		s.push(i);
	}
}
