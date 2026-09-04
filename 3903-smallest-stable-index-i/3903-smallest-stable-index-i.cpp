class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX; int n = nums.size();
        vector<int>minArray(n);
        for(int i = n-1;i>=0;i--){
            mini = min(mini,nums[i]);
            minArray[i]=mini;
        }
        int maxi=INT_MIN;
        for(int i =0;i<n;i++){
            maxi=max(maxi,nums[i]);
            if(maxi-minArray[i]<=k){
                return i;
            }
        }
        return -1;
    }
};