#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string str;
	getline(cin,s);
	   int i=0;
        while(i<s.length()){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57){
            	if(s[i]>=65 && s[i]<=90)
                str+=s[i]+32;
                else
            	str+=(s[i]);
            }
            i++;
        }
	for(int i=0;i<str.length();i++){
		cout<<str[i];
	}
}
