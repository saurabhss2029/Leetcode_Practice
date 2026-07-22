class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> mx;
       for(int i =0;i<nums.size();i++){
        mx.push(nums[i]);
       }
       int ans=0;
       for(int i =0;i<k && !mx.empty();i++){
            ans = mx.top();
            mx.pop();
       }
       return ans;
    }
};