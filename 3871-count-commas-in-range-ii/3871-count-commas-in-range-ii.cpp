class Solution {
public:
    long long countCommas(long long n) {
        long long result=0;
        long long start = 1000;
        while(start<=n){
            result = result + (n-start+1);
            start=start*1000;
        }
        return result;
    }
};