// Using Pairs  O(2*N)

class MinStack {
public:
    int mn=INT_MAX;
    stack<pair<int,int>>s; 
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.size()) mn=min(s.top().second,val);
        else mn=val;
        s.push({val,mn});
    }
    
    void pop() {
        s.pop();
        
    }
    
    int top() {
        return s.top().first;
        
    }
    
    int getMin() {
        return s.top().second;
        
    }
};

// O(N)



class MinStack {
    #define ll long long
public:
    ll int mn=INT_MAX;
    stack<ll int>s;
    MinStack() {
        while(!s.empty()) s.pop();
        mn=INT_MAX;
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            mn=val;
        }
        else{
            if(val<mn){
                s.push((1LL*2*val)-mn);   
                mn=val;
            }
            else s.push(val);      
        }
    }
    
    void pop() {
        if(s.empty()) return;
        ll int ele=s.top();
        s.pop(); 
        if(ele<mn){
            mn=2*mn-ele; 
        }
        
    }
    
    int top() {
       if(s.empty()) return -1;
       if(s.top()<mn) return mn;
        else return s.top();
    }
    
    int getMin() {
        return mn;
        
    }
};







/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
