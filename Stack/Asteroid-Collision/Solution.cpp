// Problem: Asteroid Collision
// LeetCode: 735
// Approach: Stack
// Time: O(n) amortized
// Space: O(n)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int i=0;
        stack<int>s;
        vector<int>ans;
        while(i<=nums.size()-1){
            if(s.empty()){
                s.push(nums[i]);
                i++;
            }
            else if(s.top()>=0 && nums[i]<0){
                int size=abs(nums[i]);
                if(s.top()>size){
                    i++;
                }
                else if(s.top()==size){
                    s.pop();
                    i++;
                }
                
                else{
                    while(!s.empty() &&s.top()>=0 && nums[i]<0 && size>s.top()){
                        s.pop();
                       
                    }
                    if(s.empty()){
                        s.push(nums[i]);
                        i++;
                    }    
                }
            }
            else{
                s.push(nums[i]);
                i++;
            }
            
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
