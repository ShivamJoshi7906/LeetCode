class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool hasEven = false;
        bool hasOdd = false;
        int odd = 0;

        vector<int> nums2;

        for(int x : nums1) {
            if(x % 2 == 0) {
                hasEven = true;
            } 
            else {
                hasOdd = true;
                odd = x;
            }
        }

        // Already uniform
        if(hasOdd == false || hasEven == false) {
            return true;
        }

        // Both odd and even exist
        for(int x : nums1) {
            if(x % 2 != 0) {
                nums2.push_back(x);
            } 
            else {
                nums2.push_back(x - odd);
            }
        }

        // Check whether all elements are odd
        for(int x : nums2) {
            if(x % 2 == 0) {
                return false;
            }
        }

        return true;
    }
};