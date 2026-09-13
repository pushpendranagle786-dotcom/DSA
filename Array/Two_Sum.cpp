//Problem: Two Sum
//LeetCode:1
//Time:O(n)
//Space:O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0; i<=nums.size(); i++){
            int need=target-nums[i];
            if(mp.find(need)!=mp.end()){
                return{mp[need],i};
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};

