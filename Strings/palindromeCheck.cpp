#include<iostream>
#include<string>
using namespace std;
int main(){
	bool temp=0;
	string str;
	cin>>str;
	for(int i=0;i<str.length()/2;i++){
		if(str[i]!=str[str.length()-1-i]){
		cout<<"NO";
		temp=1;
		break;
		}
	}
	if(temp==0)
	cout<<"yes";
}
