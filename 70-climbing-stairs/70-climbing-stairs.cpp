class Solution {
public:
    int climbStairs(int n) {
            int curr = 0, prev1 = 0, prev2 =1;
            while(n--){
                    curr = prev1 + prev2;
                    prev1 = prev2;
                    prev2 = curr;
            }
        return curr;
    }
};