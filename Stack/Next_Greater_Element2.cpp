vector<int> nextGreaterElements(vector<int>& nums) {
        
       stack<int> s; 
        int n = nums.size();
        vector<int> res(n, -1);
      
        for(int i = 0; i < n * 2; i++) {
            
            int idx = i >= n ? i - n : i;
            while(!s.empty() && nums[idx] > nums[s.top()]){
                res[s.top()] = nums[idx];
                s.pop();
            }  
            
            if(res[idx] == -1)  s.push(idx); 
            
        }
                               

        
        return res;
        
    }
