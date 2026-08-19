class Solution {
public:
    int climbStairs(int n) {
        int prev_2 = 1;
        int prev_1 = 1;
        for(int i =1;i<n;i++){
            int c = prev_2 + prev_1;
            prev_2 = prev_1;
            prev_1 = c;
        }
        return prev_1;
    }
};