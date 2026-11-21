class Solution {
public:
    bool checkAlphaNum(char c){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while(i<j){
            // cout<<s[i]<<" "<<s[j]<<endl;
            if(!checkAlphaNum(s[i])){
                i++;
                continue;
            }
            if(!checkAlphaNum(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i])!=tolower(s[j])) return false;
            i++; j--;
        }
        return true;
    }
};
