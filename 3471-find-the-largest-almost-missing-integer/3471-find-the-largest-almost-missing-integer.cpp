class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int ans=-1;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        if(k==1){
           for(int i =0;i<n;i++){
            if(mp[nums[i]]==1){
                ans=max(ans,nums[i]);
            }
           } 
        }
        if(k==n){
            for(int i =0;i<n;i++){
                ans=max(ans,nums[i]);
            }
        }
        if(mp[nums[0]]==1){
            ans=max(ans,nums[0]);
        }
        if(mp[nums[n-1]]==1){
            ans=max(ans,nums[n-1]);
        }
        return ans;
    }
};