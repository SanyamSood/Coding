#include<iostream>
using namespace std;

struct employee
{
	int eId;
	char favChar;
	float salary;
};
int main(){
	struct employee harry;
	harry.eId=1;
	harry.favChar='c';
	harry.salary=1223;	
	
	cout<<harry.eId;
	cout<<harry.favChar;
	cout<<harry.salary;
	return 0;
}
