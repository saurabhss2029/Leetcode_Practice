class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
         int count_even=0;
        for(int i =0;i<n;i++){
            int count=0;
            int temp=nums[i];
            while(temp>0){
                temp=temp/10;
                count++;
            }
            if(count%2==0){
                count_even++;
            }
        }
        return count_even;
    }
};