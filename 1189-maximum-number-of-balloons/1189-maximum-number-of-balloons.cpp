class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>fq(26,0);
        for(int i =0;i<text.length();i++){
            fq[text[i] - 'a']++;
        }
        return min({fq[1] ,fq[0] , fq[11]/2 , fq[14]/2 , fq[13] });
    }
};