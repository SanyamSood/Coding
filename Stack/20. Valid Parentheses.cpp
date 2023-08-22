class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
	for(int i=0;i<str.size();i++){
		char x=str[i];
		if(x=='(' || x=='[' || x=='{')
		s.push(x);
		else{
			if(s.empty()==true)
			return false;
			if(s.top()=='('&& x==')' ||s.top()=='['&& x==']'||s.top()=='{'&& x=='}' )
			s.pop();
			else
			return false;
		}
	}
	return (s.empty()==true);
    }
};
