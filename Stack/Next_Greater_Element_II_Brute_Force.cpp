// Problem: Next Greater Element II
// LeetCode: 503
// Approach: Brute Force
// Time: O(n^2)
// Space: O(n)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        bool found=false;
        vector<int>answer(nums.size(),-1);
        for(int i=0; i<=nums.size()-1; i++){
            found=false;
            for(int j=i+1; j<=nums.size()-1; j++){
                if(nums[i]<nums[j]){
                    answer[i]=nums[j];
                    found=true;
                    break;
                }
            }
            if(found==false){
            for(int j=0; j<i; j++){
                if(nums[i]<nums[j]){
                    answer[i]=nums[j];
                    found=true;
                    break; 
                }
            }
            }
           
        }
        
        return answer;
    }
};
