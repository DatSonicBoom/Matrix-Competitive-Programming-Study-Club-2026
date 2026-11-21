class Solution {
public:
    int climbStairs(int n) {
        
        if (n == 1) return 1;
        else if (n == 2) return 2;

        int prevOne = 1;
        int prevTwo = 2;

        for (int i = 3; i <= n; i++) {

            int result = prevOne + prevTwo;
            prevOne = prevTwo;
            prevTwo = result;
        }

        return prevTwo;
    }
};