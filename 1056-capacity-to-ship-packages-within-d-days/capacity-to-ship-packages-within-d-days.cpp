class Solution {
public:
    int daysRequired(vector<int>& weights, int capacity){
        int days = 1;
        int load =0;
        for(int i = 0;i<weights.size();i++){
            if(load + weights[i] > capacity){
                days += 1;
                load = weights[i];
            }else{
                load += weights[i];
            }
        }
        
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int minWeight = *max_element(weights.begin(), weights.end()); 
        int maxWeight = 0;
        for(int i=0;i<weights.size();i++){
            maxWeight += weights[i];
        }
        int low = minWeight;
        int high = maxWeight;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(daysRequired(weights,mid) > days){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        return low;
    } 
};