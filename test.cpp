class MinStack {
public:
    vector<int>v; 
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(!v.size()) v.push_back(val);
        else if(val<=v.back()) v.push_back(val);
        st.push(val);
    }
    
    void pop() {
        int t = st.top();
        if(t == v.back()) v.pop_back();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return v.back();
    }
};

