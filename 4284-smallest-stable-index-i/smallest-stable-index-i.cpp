class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        for (int i = 0; i < nums.size(); i++) {
            
            int mx = nums[0];
            int mn = nums[i];

            // maximum from 0 to i
            for (int j = 0; j <= i; j++) {
                mx = max(mx, nums[j]);
            }

            // minimum from i to n-1
            for (int j = i; j < nums.size(); j++) {
                mn = min(mn, nums[j]);
            }

            if (mx - mn <= k) {
                return i;
            }
        }

        return -1;
    }
};