class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int right = n-1;
        for(int i=0;i<n/2;i++){
            char temp = s[i];
            s[i] = s[right];
            s[right] = temp;
            right --;
        }
    }
};