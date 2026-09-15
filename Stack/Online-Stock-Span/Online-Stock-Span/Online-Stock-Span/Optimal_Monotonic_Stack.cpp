// Problem: Online Stock Span
// LeetCode: 901
// Approach: Monotonic Stack
// Time: O(n) amortized
// Space: O(n)
class StockSpanner {
    stack<pair<int,int>> s;
   
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        if(s.empty()){
            s.push({price,span});
            return span;
        }
      while(!s.empty() && price>=s.top().first){
            span+=s.top().second;
            s.pop();
      }
      s.push({price,span});
        return span;
    }
};
