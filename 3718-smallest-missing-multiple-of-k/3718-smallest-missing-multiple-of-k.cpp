class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<long long>st (nums.begin(), nums.end());
        long long n = k; 
       while(true){
           if(st.find(n) == st.end()){//agar n set ke andar nhi milta hai then break
               break;
           }
           n = n +k;
       }
        return n;
    }
};