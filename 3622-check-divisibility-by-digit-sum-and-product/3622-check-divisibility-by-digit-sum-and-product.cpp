class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int temp=n;
        while(n>0){
            int rem=n%10;
            sum=sum+rem;
            product=product*rem;
            n=n/10;
        }
    int total=sum+product;
        return temp%total==0;
    }
};