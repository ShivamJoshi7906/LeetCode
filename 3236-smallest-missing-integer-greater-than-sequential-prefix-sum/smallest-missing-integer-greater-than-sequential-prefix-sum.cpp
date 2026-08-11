class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum=nums[0];
        int temp=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]+1 == nums[i+1]){
                sum +=nums[i+1];
            }else{
                break;                
            }
            
            
        }
        int ans = sum;
        while(find(nums.begin(),nums.end(),ans) != nums.end()){
            ans++;
        }
        return ans;
    }
};