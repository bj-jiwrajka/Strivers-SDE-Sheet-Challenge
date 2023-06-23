class MyQueue {
public:
    stack<int> s;
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
       int x=s.size();
       x--;
       while(x--)
       {
           int t=s.top();
           st.push(t);
           s.pop();
       }
       int ans=s.top();
       s.pop();
       int sz=st.size();
       while(sz--)
       {
           int t=st.top();
           st.pop();
           s.push(t);
       }
       return ans;
    }
    
    int peek() {
       int x=s.size();
       x--;
       while(x--)
       {
           int t=s.top();
           st.push(t);
           s.pop();
       }
       int ans=s.top();
       int sz=st.size();
       while(sz--)
       {
           int t=st.top();
           st.pop();
           s.push(t);
       }
       return ans;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */