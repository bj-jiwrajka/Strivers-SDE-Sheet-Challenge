class MyStack {
public:
    queue<int> q,Q;
    MyStack() { }
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int s=q.size();
        s--;
        while(s--)
        {
            Q.push(q.front());
            q.pop();
        }
        int ans=q.front();
        q.pop();
        while(!Q.empty())
        {
            q.push(Q.front());
            Q.pop();
        }
        return ans;
    }
    
    int top() {
        int s=q.size();
        s--;
        while(s--)
        {
            Q.push(q.front());
            q.pop();
        }
        int ans=q.front();
        q.pop();
        while(!Q.empty())
        {
            q.push(Q.front());
            Q.pop();
        }
        q.push(ans);
        return ans;
    }
    
    bool empty() {
        return !q.size();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */