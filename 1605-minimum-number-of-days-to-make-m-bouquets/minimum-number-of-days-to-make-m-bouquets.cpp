class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int count = 0;
        int noOfB = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= day){
                count++;
            }else{
                noOfB += (count/k);
                count = 0;
            }
        }
        noOfB += (count/k);
        if(noOfB >= m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans=0;
        if(1LL * m * k > bloomDay.size()){
            return -1;
        } 
        while(low <= high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k) == true){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;        
    }
};