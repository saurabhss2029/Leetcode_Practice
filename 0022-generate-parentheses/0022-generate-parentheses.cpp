class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        helper(ans,current,0,0,n);
        return ans;
    }
    void helper(vector<string>& ans, string& current, int open, int close, int n){
        if (current.size() == 2*n) {// base case hai 
            ans.push_back(current);
            return;
        }
        if (open < n) {
            current.push_back('(');
            helper(ans,current,open+1,close,n);
            current.pop_back();
        }
        if (close < open) {
            current.push_back(')');
            helper(ans,current,open,close+1,n);
            current.pop_back();
        }
    }
};
// class Solution {
// public:
//     vector<string> result;

//     bool isValid(string str) {
//         int count = 0;

//         for(char ch:str) {
//             if(ch == '(')
//                 count++;
//             else
//                 count--;
//             if(count < 0)
//                 return false;
//         }
//         return count==0;
//     }

//     void solve(string& curr, int n) {
//         if(curr.length() == 2*n) {
//             if(isValid(curr)) {
//                 result.push_back(curr);
//             }
//             return;
//         }

//         curr.push_back('(');
//         solve(curr, n);
//         curr.pop_back();

//         curr.push_back(')');
//         solve(curr, n);
//         curr.pop_back();
//     }

//     vector<string> generateParenthesis(int n) {
//         string curr = "";

//         solve(curr, n);

//         return result;
//     }
// };