class Solution {
public:
    int a[26]={0};
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for(int i=0; i<26;i++){
            if(a[i]!=0)
            return false;
        }
        return true;
    }
};
