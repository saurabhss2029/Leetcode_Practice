class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans;
        int val=0;
        for(int i =0;i<seq.size();i++){
            if(seq[i]=='('){
                val++;
                ans.push_back(val%2);
            }
            else{
                ans.push_back(val%2);
                val--;
            }
        }
        return ans;
    }
};