// Problem: Largest Rectangle in Histogram
// LeetCode: 84
// Approach: Brute Force
// Time: O(n^3)
// Space: O(1)
// Note: This solution may give TLE on LeetCode due to O(n^3) time complexity.

class Solution {
public:
    int MaximumArea(int i, int j,vector<int>&heights){
    int minimum=heights[i];
    int count=0;
       while(i<=j){
        if(minimum>heights[i]){
            minimum=heights[i];
        }
        i++;
        count++;
       }
        int area=minimum*count;
        return area;
    }
    int largestRectangleArea(vector<int>& heights) {
        int area=INT_MIN;
        for(int i=0; i<heights.size(); i++){
            for(int j=i; j<heights.size(); j++){
                int maximum=MaximumArea(i,j,heights);
                if(area<maximum){
                    area=maximum;
                }
            }
        }
        return area;
    }
};
