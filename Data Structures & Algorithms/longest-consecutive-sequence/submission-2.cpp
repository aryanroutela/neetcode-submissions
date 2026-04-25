class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
                maxcount=max(maxcount,count);
            }
            if(nums[i+1]-nums[i]>1){
                maxcount=max(maxcount,count);
                count=1;
            }
        }
        return maxcount;
    }
};
