class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str;
        int temp=0;
        while(columnNumber>0){
            temp=(columnNumber-1)%26;
            columnNumber=(columnNumber-1)/26;
            str=static_cast<char>(temp +65)+str;


        }
        return str;
    }
};
