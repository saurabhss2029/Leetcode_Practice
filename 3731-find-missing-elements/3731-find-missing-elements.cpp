class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx = INT_MIN;
        int mini = INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>maxx){
                maxx=nums[i];
            }
        }
        for(int i =0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        set<int>st;
        for(int i =0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int>result;
        for(int i =mini ;i<maxx;i++){
            if(st.find(i) == st.end()){
                result.push_back(i);
            }  
        }
        return result;
    }
};