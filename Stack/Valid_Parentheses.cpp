// Problem: Valid Parentheses
// LeetCode: 20
// Time: O(n)
// Space: O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(int i=0; i<=s.length()-1; i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                ch.push(s[i]);
            }
            else{
                if(ch.size()==0 ){
                    return false;
                }
 if((ch.top()=='(' && s[i]==')') || (ch.top()=='[' && s[i]==']') || (ch.top()=='{' && s[i]=='}')){
            ch.pop();
             }
             else{
                return false;
             }
                
            }
        }
        if(ch.size()!=0){
            return false;
        }
        return true;
    }
};
