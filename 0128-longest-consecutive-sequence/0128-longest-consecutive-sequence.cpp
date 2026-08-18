class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(int num : st) {
            if(st.find(num - 1) == st.end()) {
                int curnum = num;
                int currlen = 1;
                while(st.find(curnum + 1) != st.end()) {
                    curnum++;
                    currlen++;
                }
                ans = max(ans, currlen);
            }
        }
        return ans;
    }
};