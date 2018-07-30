class Solution {
public:
    string toLowerCase(string str) {
        int lens=str.length();
        for(int i=0;i<lens;i++){
            if(str[i]>=65 && str[i]<=90) str[i]=str[i]+32;
        }
        return str;
    }
};