class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<string, int> mp;
        int n = word.size();
        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = i; j < n; j++) {
                temp += word[j];
                mp[temp]++;
            }
        }
        int count = 0;
        for (string &pattern : patterns) {
            if (mp.count(pattern))
                count++;
        }
        return count;
    }
};