class Solution {
public:
      int majorityElement(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     int current = nums[0];
    //     int count = 1;
    //     int size = nums.size();
    //     for (int i = 1; i < size; ++i) {
    //         if (nums[i] == current) {
    //             count++;
    //         } else {
    //             current = nums[i];
    //             count++;
    //         }
    //         if (count > size / 2) {
    //             return current;
    //         }
    //     }
    //     return current;
    //by hashmap
    unordered_map<int , int> mp;
    for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto it : mp){
        if(it.second > nums.size()/2){
            return it.first;
        }
    }
    return -1;
      }
};