class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=prices[0];
        int maxdiff=0;
        for(int i=1;i<n;i++){
            if(prices[i]>min){
                int diff=prices[i]-min;
                maxdiff=max(maxdiff,diff);
            }
            else{
                min=prices[i];
            }
        }
        return maxdiff;
    }
};
