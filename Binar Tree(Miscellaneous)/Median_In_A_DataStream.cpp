class MedianFinder {
public:
    priority_queue<int>large;
    priority_queue<int,vector<int>,greater<int>>small;
    
    MedianFinder() {
        
        
    }
    
    void addNum(int num) {
        
        if(large.empty() || large.top()>num) large.push(num);
        else small.push(num);
        
        if(large.size()>small.size()+1){
            small.push(large.top());
            large.pop();
        }
        else if(small.size()>large.size()+1){
            large.push(small.top());
            small.pop();
        }
        
    }
    
    double findMedian() {
        
         if(small.size()==large.size()){
            if(small.empty()) return 0;
            else return (small.top()+large.top())/2.0;
        }
        else{
            if(large.size()>small.size()) return large.top();
            else return small.top();
        }
         
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
