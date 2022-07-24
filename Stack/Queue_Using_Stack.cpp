class MyQueue {
public:
    stack<int>a,b;
    
    void push(int x){
        a.push(x);
    }
    
    int pop() {
        int ans=peek();
        b.pop();
        return ans;
    }
    
    int peek() {
        
        if(b.empty()){
            while(a.size()) b.push(a.top()),a.pop();
        }
        
        return b.top();     
        
    }
    
    bool empty() {
        
        return a.empty() && b.empty();
        
    }
};

