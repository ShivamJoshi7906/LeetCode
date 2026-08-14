class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> suml(n, 0);
        vector<int> sumr(n, 0);
        
        for(int i=1;i<n;i++){
            
            suml[i] = suml[i-1] + nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            
            sumr[i] = sumr[i+1] + nums[i+1];
        }
        for(int i=0;i<n;i++){
            if(suml[i] == sumr[i]){
                return i;
            }
            
        }
        return -1;
    }
};