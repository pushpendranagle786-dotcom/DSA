//Problem:Richest Customer Wealth
//LeetCode:1672
//Time:O(n*m)
// Space: O(1)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int temp=0;
        for(int i=0; i<=accounts.size()-1; i++){
            temp=0;
            for(int j=0; j<=accounts[0].size()-1; j++){
                temp=temp+accounts[i][j];
            }
            if(temp>ans){
                ans=temp;
            }
        }
        return ans;
    }
};
