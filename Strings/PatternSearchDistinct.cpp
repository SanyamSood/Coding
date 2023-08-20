#include<iostream>
#include<string>

using namespace std;
int main(){
	string text;
	cin>>text;
	string pat;
	cin>>pat;
	int n=text.length();
	int m=pat.length();
	for(int i=0;i<=n-m;){
		int j;
		for(j=0;j<m;j++){
			if(pat[j]!=text[i+j])
			break;
		}
		if(j==m)
		cout<<i<<" ";
		if(j==0)
		i++;
		else
		i=i+j;
	}
	
}
