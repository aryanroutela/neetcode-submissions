class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int maxrt=-1;
            for(int j=i+1;j<n;j++){
                maxrt=max(maxrt,arr[j]);
            }
            arr[i]=maxrt;
        }
        return arr;
    }
};