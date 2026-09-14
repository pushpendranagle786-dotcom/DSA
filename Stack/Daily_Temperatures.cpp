// Problem: Daily Temperatures
// LeetCode: 739
// Time: O(n)
// Space: O(n)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tempreatures) {
        vector<int>answer(tempreatures.size(),0);
        stack<int>s;
        for(int i=0; i<=tempreatures.size()-1; i++){
            while(!s.empty() && tempreatures[s.top()]<tempreatures[i]){
                int index=i-s.top();
                answer[s.top()]=index;
                s.pop();
            }
            s.push(i);
        }
        return answer;
    }
};
