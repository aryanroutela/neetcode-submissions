class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            char c=s[i];
            int a=c-97;
            freq[a]++;
        }
        for(int i=0;i<n;i++){
            char c=t[i];
            int a=c-97;
            freq[a]--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};
