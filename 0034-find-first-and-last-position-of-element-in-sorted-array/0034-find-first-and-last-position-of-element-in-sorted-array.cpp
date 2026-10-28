class Solution {
public:
    int first(vector<int>&nums, int target, int low , int high){
        int first=-1;
        while(low<=high){
            int mid = low +(high - low)/2;
            
            if(nums[mid]==target){
                first = mid;
                high = mid-1; 
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
     return first;
    }
    int second(vector<int>&nums , int target , int low , int high){
            int second=-1;
            while(low<=high){
            int mid = low +(high - low)/2;
            
            if(nums[mid]==target){
                second = mid;
                low = mid+1; 
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
     return second;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result(2,-1);
        if(nums.empty()) return result;
        int low =0; int high = nums.size()-1;
        int a = first(nums,target,low,high);
        int b = second(nums,target,low,high);
        result[0]=a;
        result[1]=b;
       return result;
    }
};