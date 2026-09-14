// Problem: Min Stack
// LeetCode: 155
// Time: O(1) per operation
// Space: O(n)
class MinStack {
    stack<int>Stack;
    stack<int>minstack;
    int min;
    int mintop=-1;
public:
    MinStack() {
        min=INT_MIN;
        
    }
    
    void push(int value) {
        if(minstack.size()-1==-1){
            min=value;
            Stack.push(value);
            minstack.push(value);
            mintop++;
        }
        else if(min>=value){
            min=value;
            Stack.push(value);
            minstack.push(min);
            mintop++;
        }
        else{
            Stack.push(value);
        }
    }
    
    void pop() {
        if(minstack.top()==Stack.top()){
            Stack.pop();
            minstack.pop();
            if(minstack.size()-1!=-1){
                min=minstack.top();
            }
          
        }
        else{
            Stack.pop();
           
        }
    }
    
    int top() {
        if(Stack.size()-1==-1){
            return Stack.empty() ;
        }
        return Stack.top();
    }
    
    int getMin() {
        if(minstack.size()-1==-1){
            return minstack.empty() ;

        }
        return min;
    }
};
