class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<int> time(n,0);
        for(int i=0;i<n;i++){
            time[i]=(target-position[i])/speed[i];
        }
        int fleet=n;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(time[i]==time[j]){
                    fleet-=1;
                }
            }
        }
        return fleet;
    }
};
