#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        
        if (n == 2) return min(cost[0], cost[1]);

        int prevOne = cost[0];
        int prevTwo = cost[1];

        for (int i = 3; i <= n; i++) {
            int result = min(prevOne, prevTwo) + cost[i - 1];
            prevOne = prevTwo;
            prevTwo = result;
        }

        return min(prevOne, prevTwo);
    }
};