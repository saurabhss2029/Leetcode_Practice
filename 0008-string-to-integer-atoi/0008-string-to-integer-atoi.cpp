class Solution {
public:
    bool isDigit(char c){
     return c >='0' && c<='9';
    }
    int myAtoi(string s) {
        int i =0; int sign =1;
        int n = s.size();
        long long num=0;
        while(i<n && s[i]==' '){
            i=i+1;
        }
        if(i<n){
            if(s[i]=='-'){
                sign = -1;
                i++;
            }
            else if(s[i]=='+'){
                i++;
            }
        }
        while(i<n && isDigit(s[i])){
            int digit = s[i] - '0';
            num = num*10+digit;
             if (sign == 1 && num > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;
            i++;
        }
        return num*sign;
    }
};