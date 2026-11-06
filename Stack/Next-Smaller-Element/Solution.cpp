// Problem: Next Smaller Element
// Approach: Monotonic Stack
// Time: O(n)
// Space: O(n)

class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        vector<int>ans(arr.size(),-1);
        stack<int>s;
        for(int i=0; i<arr.size(); i++){
            while(!s.empty() && arr[s.top()]>arr[i]){
                ans[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};
