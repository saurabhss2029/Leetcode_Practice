class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_odd=0;
        int sum_even=0;
        sum_odd = n*n;
        sum_even = n*(n+1);
        int ans = gcd(sum_odd , sum_even);
        return ans;
    }
};