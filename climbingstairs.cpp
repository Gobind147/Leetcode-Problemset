//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//Example 1:

//Input: n = 2
//Output: 2
//Explanation: There are two ways to climb to the top.
//1. 1 step + 1 step
//2. 2 steps

class Solution {
public:
    int climbStairs(int n) {
        
        int a =1;
        int b=1;
        int c=0;
        for(int i=2;i<=n;i++)
        {
            c = a+b;
            b=a;
            a=c;
        }
        return a;
    }
};
