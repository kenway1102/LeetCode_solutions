class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int temp = x;
        int dec = 10;
            
        if(temp < 0)
                return false;
        while(temp>0)
        {
                rev = rev*dec +temp%10;
                temp /= 10;
        }
            if(rev == x)
                    return true;
            
            return false;
    }
};