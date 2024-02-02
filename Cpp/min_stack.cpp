class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack_in.push(val);
        if (min_Stack.empty()) min_Stack.push(val);
        else min_Stack.push(min(min_Stack.top(), val));
        
    }
    
    void pop() {
        stack_in.pop();
        min_Stack.pop();
        
    }
    
    int top() {
        return stack_in.top();
        
    }
    
    int getMin() {
        return min_Stack.top(); 
        
    }
private:
    stack<int> stack_in;
    stack<int> min_Stack;

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */