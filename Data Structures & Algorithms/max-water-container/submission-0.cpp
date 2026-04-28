class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int minht=0;
        int water=0;
        int maxwater=0;
        int left=0;
        int right=n-1;
        while(left<right){
            minht=min(heights[left],heights[right]);
            int width=right-left;
            water=minht*width;
            maxwater=max(maxwater,water);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxwater;
    }
};
