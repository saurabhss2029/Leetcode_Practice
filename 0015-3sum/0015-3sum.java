class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> list = new ArrayList<>();
        int size = nums.length;
        for(int i =0;i<nums.length;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;// repeat nhi hoga isse
            }
            int j = i+1;
            int k = size -1;
            while(j<k){
                if((nums[i] + nums[j] + nums[k])<0){
                    j++;;
                }
                else if((nums[i] + nums[k] + nums[j])>0){
                    k--;
                }
                else{
                    list.add(Arrays.asList(nums[i],nums[j],nums[k]));
                    j++;// taki same values ka triplet na bnaye
                    k--;
                while(j<k && nums[j] == nums[j-1]) 
                j++;
                }
            }
        }
        return list;
    }
}