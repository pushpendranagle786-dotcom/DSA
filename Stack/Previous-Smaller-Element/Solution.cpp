// Problem: Previous Smaller Element
// Approach: Monotonic Stack
// Time: O(n)
// Space: O(n)

class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        vector<int>ans;
        stack<int>s;
        for(int i=0; i<arr.size(); i++){

            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            if(!s.empty() && s.top()<arr[i]){
                ans.push_back(s.top());
                s.push(arr[i]);
            }
            else{
                ans.push_back(-1);
                s.push(arr[i]);
            }
        }

        return ans;
    }
};
