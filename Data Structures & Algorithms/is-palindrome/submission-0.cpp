class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string str="";
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c>='a' && c<='z' || c>='0' && c<='9'){
                str+=c;
            }
            else if(c>='A' && c<='Z'){
                c=c+32;
                str+=c;
            }
        }
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
