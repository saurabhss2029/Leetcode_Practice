class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int i=0;
       int j=nums.size()-1;
       int k=nums.size()-1;
       vector<int>result(nums.size());
       while(i<=j){
        if(abs(nums[j]>abs(nums[i]))){
            result[k] = nums[j]*nums[j];
            k--;
            j--;
        }
        else{
            result[k] = nums[i]*nums[i];
            i++;
            k--;
        }
       }
       return result; 
    }
};