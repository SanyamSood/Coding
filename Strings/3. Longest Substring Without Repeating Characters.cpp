class Solution {
public:
     int CHAR[256]={0};
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        return 0;
        if(s.length()==1)
        return 1;
       int start=0;
       int end=0;
       int temp=0;
       int res=0;
       while(end<s.length()){
           if(CHAR[s[end]]==0){
               temp++;
               CHAR[s[end]]=1;
               end++;
           }
           else{
               res=max(temp,res);
               temp--;
               CHAR[s[start]]=0;
               start++;
           }
       }
       res=max(temp,res);
       return res;
    }
};
