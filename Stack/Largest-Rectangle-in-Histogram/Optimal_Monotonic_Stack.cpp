// Problem: Largest Rectangle in Histogram
// LeetCode: 84
// Approach: Optimal (Monotonic Stack)
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights){
        vector<int>pse(heights.size(),-1);
        vector<int>nse(heights.size(),heights.size());
        stack<int>s;
        for(int i=0; i<heights.size(); i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
               pse[i]=s.top();
            }
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=heights.size()-1; i>=0; i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
                nse[i]=s.top();
            }
            s.push(i);
        }
        int ans=0;
        for(int i=0; i<heights.size(); i++){
            int currentarea=heights[i]*(nse[i] -pse[i]-1);
            ans=max(ans,currentarea);
        }
        return ans;
    }
};
