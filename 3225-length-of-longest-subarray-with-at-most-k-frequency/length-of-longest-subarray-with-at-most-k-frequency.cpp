class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map <int,int> good;
        int n = nums.size();
        int left = 0;
        int ans = 0;
        for(int right = 0;right<n;right++){
            good[nums[right]]++;

            while(good[nums[right]] > k){
                good[nums[left]]--;
                left++;
            }

            ans = max(ans,right-left +1);
        }
        return ans;

    }
};