class Solution {
public:
    bool checkGoodInteger(int n) {
        int temp = n; int sq_sum=0; int sum =0;
        while(temp>0){
            int rem = temp%10;
            sq_sum = sq_sum + rem*rem;
            sum = sum + rem;
            temp = temp/10;
        }
        if(sq_sum - sum >= 50){
            return true;
        }
        return false;
    }
};