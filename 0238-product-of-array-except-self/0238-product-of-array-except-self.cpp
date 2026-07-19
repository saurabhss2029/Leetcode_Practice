class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans1(n), ans2(n), result(n);
        int prefix = 1;
        for (int i=0; i<n; i++) {
            ans1[i] = prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for (int i = n-1; i>=0; i--) {
            ans2[i] = suffix;
            suffix *= nums[i];
        }
        for (int i=0 ; i<n; i++) {
            result[i] = ans1[i]*ans2[i];
        }
        return result;
    }
};