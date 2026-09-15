// Problem: Online Stock Span
// LeetCode: 901
// Approach: Brute Force
// Time: O(n^2)
// Space: O(n)
class StockSpanner {
    vector<int>Price;
    int count=1;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        count=1;
        if(Price.empty()){
            Price.push_back(price);
            return count;
        }
        for(int i=Price.size()-1; i>=0; i--){
            if(price>=Price[i]){
                count++;
            }
            else{
                break;
            }
        }
        Price.push_back(price);
        return count;
    }
};
