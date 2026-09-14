// Problem: Evaluate Reverse Polish Notation
// LeetCode: 150
// Time: O(n)
// Space: O(n)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operand;
        for(int i=0; i<=tokens.size()-1; i++){

                    if(tokens[i]=="+"){
                        int first=operand.top();
                        operand.pop();
                        int sec=operand.top();
                        operand.pop();
                        int third=first+sec;
                        operand.push(third);
                }
                 else if(tokens[i]=="-"){
                        int first=operand.top();
                        operand.pop();
                        int sec=operand.top();
                        operand.pop();
                        int third=sec-first;
                        operand.push(third);
                }
                 else if(tokens[i]=="*"){
                        int first=operand.top();
                        operand.pop();
                        int sec=operand.top();
                        operand.pop();
                        int third=first*sec;
                        operand.push(third);
                }
                 else if(tokens[i]=="/"){
                        int first=operand.top();
                        operand.pop();
                        int sec=operand.top();
                        operand.pop();
                        int third=sec/first;
                        operand.push(third);
                }
            else{
                operand.push(stoi(tokens[i]));
            }
        }
        int result=operand.top();
        operand.pop();
        return result;
    }
    
};
