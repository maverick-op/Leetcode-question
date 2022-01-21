// https://leetcode.com/problems/fibonacci-number/


class Solution {
public:
    int fib(int n) {
        if(n==0)
        {
            return 0;
        }
                             //     base conditon
        if(n==1)
        {
            return 1;
        }
        
        int out1 = fib(n-1);
        int out2 = fib(n-2);
        
        return out1+out2;                 // induction
        
    }
};
