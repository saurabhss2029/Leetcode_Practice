class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result(2,-1);
        if(nums.empty()) return result;
    //  vector<int>result; int a =-1;int b=-1;
    //  for(int i =0;i<nums.size();i++){
    //     if(nums[i]==target){
    //         a=i;
    //         break;
    //     }
    //  }
    //   for(int i =nums.size()-1;i>=0;i--){
    //     if(nums[i]==target){
    //         b=i;
    //         break;
    //     }
    //  }
    //  result.push_back(a);
    //  result.push_back(b);
    //  return result;
    //BY BINARY SEARCH
    int low =0; int high = nums.size()-1; int a=0; int b =0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]>=target){
            //result.push_back(mid);
            a =mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(low < nums.size() && nums[low] == target) {
            result[0] = low;
        } else {
            return result; // target not found
        }

    low =0; high = nums.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]<=target){
            //result.push_back(mid-1);
            b=mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    result[0]=a;
    result[1]=b;
return result;
    }
};