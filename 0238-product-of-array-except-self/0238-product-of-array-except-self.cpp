class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>result(n);
        int prefix=1;
        int suffix=1;
        for(int i=0;i<nums.size();i++){
            left[i]=prefix;
            prefix=prefix*nums[i];

        }
        for(int i=nums.size()-1;i>=0;i--){
            right[i]=suffix;
            suffix=suffix*nums[i];
            
        }
        for(int i =0;i<nums.size();i++){
            result[i]=left[i]*right[i];
        }
        return result;
    }
};