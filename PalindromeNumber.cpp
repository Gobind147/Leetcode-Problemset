class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long count =0;
        long long temp=x;
        while(x!=0)
        {
            count = 10*count + x%10;
            x = x/10;
        }
        if(count == temp)
        {
            return true;
        }
        else
            return false;
        
    }
};
