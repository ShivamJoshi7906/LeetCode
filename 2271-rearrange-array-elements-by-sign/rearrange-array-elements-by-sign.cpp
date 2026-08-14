class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> evena;
        vector<int> odda;
        for(int i =0;i<n;i++){
            if(nums[i] > 0){
                evena.push_back(nums[i]);
            } else {
                odda.push_back(nums[i]);
            }
        }
        int even =0;
        int odd =0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i] = evena[even];
                even++;
            }else{
                nums[i] = odda[odd];
                odd++;
            }
            
        }
        return nums;
    }
};