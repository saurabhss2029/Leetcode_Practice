class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        int temp = n;
        string s = "";
        while (temp > 0) {
            int rem = temp % 10;
            if (rem > 0) {
                s += char(rem + '0');
                sum += rem;
            }
            temp /= 10;
        }
        reverse(s.begin(), s.end());
        if (s.empty())
            return 0;

        long long num = stoll(s);
        return num * sum;
    }
};