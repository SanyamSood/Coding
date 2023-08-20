class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0 || s.length()==1 && s[0]==32)
        return 0;
        int res=1;
        int start=0;
        int end=s.length()-1;
        while(s[start]==32 && start<s.length()){
            start++;
        }
        if(start==s.length() && s.length()>1)
        return 0;
        while(s[end]==32){
            end--;
        }
        for(int i=start;i<end;i++){
            if(s[i]==32 && s[i+1]!=32)
            res++;
        }
        return res;
    }
};
