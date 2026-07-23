class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n : nums) freq[n]++;
        //min heap hai yeh 
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;

        for(auto& [num, count] : freq) {
            minh.push({count, num});// freq, num insert kiyan hai heap mei 
            if(minh.size() > k)
                minh.pop();
        }

        vector<int> result;
        while(!minh.empty()) {
            result.push_back(minh.top().second);
            minh.pop();
        }

        return result;
    }
};