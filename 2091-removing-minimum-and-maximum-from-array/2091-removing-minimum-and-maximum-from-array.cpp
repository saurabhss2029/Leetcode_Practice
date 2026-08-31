class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int max_idx = 0, maxi = INT_MIN;
        int min_idx = 0, mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                max_idx = i;
            }

            if (nums[i] < mini) {
                mini = nums[i];
                min_idx = i;
            }
        }
        int left = min(min_idx, max_idx);
        int right = max(min_idx, max_idx);
        int res1 = right + 1;
        int res2 = n - left;
        int res3 = (left + 1) + (n - right);

        return min({res1, res2, res3});
    }
};