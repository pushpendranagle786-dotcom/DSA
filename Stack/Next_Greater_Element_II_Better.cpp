// Problem: Next Greater Element II
// LeetCode: 503
// Approach: Monotonic Stack
// Time: O(n)
// Space: O(n)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>answer(nums.size(),-1);
        stack<int>s;
        for(int i=0; i<=nums.size()-1; i++){
            while(!s.empty() && nums[s.top()]<nums[i]){
               answer[s.top()]=nums[i];
               s.pop();
            }
            s.push(i);
        }
        if(!s.empty()){
        for(int i=0; i<=nums.size()-1; i++){
            if(!s.empty()){
             while(!s.empty() && nums[s.top()]<nums[i]){
               answer[s.top()]=nums[i];
               s.pop();
            }
            }
        }
        }
        return answer;
    }
};
