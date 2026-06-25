// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size(); int count =0; int count1 =0; int count2 =0;
//         for(int i =0;i<n;i++){
//             if(nums[i]==0){
//                 count++;
//             }
//             else if(nums[i]==1){
//                 count1++;
//             }
//             else{
//                 count2++;
//             }
//         }
//         for(int i =0 ;i<n;i++){
//             if(i<=count -1){
//                 nums[i] = 0;
//             }
//             else if (i<count + count1){
//                 nums[i] =1;
//             }
//             else{
//                 nums[i] = 2;
//             }
//         }
//     }
// };
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};