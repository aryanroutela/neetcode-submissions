class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
            }
        }
        return count;
    }
};
