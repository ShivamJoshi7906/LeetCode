class Solution {
public:
    bool isValid(string s) {
        vector<char> string;
        int n = s.size();
        int count = 0;
        int temp = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                string.push_back(s[i]);
            }
            else{
                if(string.empty()){
                    return false;
                }
                if(s[i] == ')' && string.back() != '('){
                    return false;
                }
                if(s[i] == '}' && string.back() != '{'){
                    return false;
                }
                if(s[i] == ']' && string.back() != '['){
                    return false;
                }
                string.pop_back();
            }
            
        }
        return string.empty();
    }
};