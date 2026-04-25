class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> result;
        if(n==1){
            return nums;
        }
        for(int i=0;i<n-1;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                if(count>=k){
                result.push_back(nums[i]);
                i++;
                break;
            }
            }
        }
        return result;
    }
};
