class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;
        for(int i =0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);// key pe store ho jayega
        }
        vector<vector<string>> result;// to store output
        for(auto it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};