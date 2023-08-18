class Solution {
public:
    string getHint(string secret, string guess) {
        int nums[10]={0};
        int bulls=0;
        int cows=0;
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]){
            bulls++;
            nums[secret[i]-'0']++;
        }
            else
            nums[secret[i]-'0']++;

        }
        for(int i=0;i<guess.length();i++){
            if(nums[guess[i]-'0']>0){
                cows++;
                nums[guess[i]-'0']--;
            }
        }
        cows=cows-bulls;
        string res="";
        res=res+to_string(bulls);
        res=res+"A";
        res=res+to_string(cows);
        res=res+"B";
        return res;
    }
};
