// Problem: Largest Rectangle in Histogram
// LeetCode: 84
// Approach: Brute Force (Improved)
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Note: This solution may give TLE on LeetCode due to O(n^2) time complexity.
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int min=heights[0];
        int count=1;
        int area=0;
        int possible_ans=0;
        for(int i=0; i<heights.size(); i++){
            count=1;
            min=heights[i];
            for(int j=i; j<heights.size(); j++){
                if(min>heights[j]){
                    min=heights[j];
                }
                if(min<=heights[j]){
                    possible_ans=min*count;
                }
                if(area<=possible_ans){
                    area=possible_ans;
                }
                count++;
            }
        }
        return area;
    }
};
