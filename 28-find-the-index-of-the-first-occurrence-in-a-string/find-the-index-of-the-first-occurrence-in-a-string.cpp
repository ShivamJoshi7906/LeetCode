class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
           
            int ph=i;
            int j;
            for(j=0;j<needle.size();j++){
                if(haystack[ph] == needle[j]){
                    ph++;
                }else{
                    break;
                }
            }
            if(j == needle.size()) {
                return i;
            }
        }
        return -1;
    }
};