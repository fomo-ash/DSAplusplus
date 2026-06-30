class MinStack {
public:
    stack<int>st,st2;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(st2.empty() || value<=st2.top()){
            st2.push(value);
        }
    }
    
    void pop() {
        if(st.top()==st2.top()){ //we need to compare here because think of a case where we have the min stack and normal stack at same size we need to remove the top
            st2.pop();
        }
        st.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */