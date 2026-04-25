class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n%2 != 0 || n==0){
            return false;
        }
        stack<char> st;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='(' || c=='{' || c== '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char t=st.top();
                st.pop();
                if((c==')' && t!='(') || (c=='}' && t!='{') || (c== ']' && t!='[')){
                    return false;
                }
            }
        }
        return st.empty();
    }
};
