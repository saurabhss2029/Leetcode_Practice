class Solution {
public:
    bool isGood(vector<int>& nums) {
       int n = nums.size();
       int maxx = INT_MIN;
       for(int i =0;i<n;i++){
        if(nums[i]>maxx){
            maxx = nums[i];
        }
       }
       int count=0;
       for(int i =0;i<n;i++){
            if(nums[i]==maxx){
                count++;
            }
       }
       if(n != maxx+1){
        return false;
       } 
       vector<int>cnt(maxx+1);
       for(int i =0;i<n;i++){
        cnt[nums[i]]++;
       }
       for(int i =1;i<maxx;i++){
        if(cnt[i] != 1){
            return false;
        }
       }
       return cnt[maxx]==2;
    }
};