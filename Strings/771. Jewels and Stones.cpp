class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res=0;
        bool test[256]={0};
        for(int i=0;i<jewels.length();i++){
            test[jewels[i]]=1;
        }
        for(int i=0;i<stones.size();i++){
            if(test[stones[i]]!=0)
            res++;
        }
        return res;
    }
};
