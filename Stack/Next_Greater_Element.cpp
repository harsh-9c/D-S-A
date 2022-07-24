// 1. TRAVERSING FROM FRONT

vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }


// 2. TRAVERSING FROM BACK

 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>m;
        stack<int>s;
        vector<int>ans;
        
        for(int i=nums2.size()-1;i>=0;i--){  
            
            if(s.empty()) s.push(nums2[i]),m[nums2[i]]=-1;     
            else if(s.top()>nums2[i]) m[nums2[i]]=s.top(),s.push(nums2[i]);
            else{
                while(s.size() && s.top()<nums2[i]) s.pop();
                if(s.empty()) s.push(nums2[i]),m[nums2[i]]=-1;
                else m[nums2[i]]=s.top(),s.push(nums2[i]);
            }    
            
        }
        
        for(auto x:nums1) ans.push_back(m[x]);
        
        return ans;
               
        
    }

