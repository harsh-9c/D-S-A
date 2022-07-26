// modifying given array

int largestRectangleArea(vector<int>& height) {
        
        height.push_back(0);
        int n=height.size();
        int ans=0;
        stack<int>idx;
        
        for(int i=0;i<n;i++){
            
            while(idx.size() && height[idx.top()]>height[i]){
                
                int h=height[idx.top()]; idx.pop();
                int l=idx.empty() ? -1 : idx.top();
                ans=max(ans,(i-l-1)*h); 
            }
            
            idx.push(i);
            
        }
        
        return ans;
        
                
    }


// without modifying given array

int largestRectangleArea(vector<int>& height) {
		int n = height.size(), area = 0, h, l;
		stack<int> indexes;
		for (int i = 0; i <= n; i++) {
			while (i == n || (!indexes.empty() && height[indexes.top()] > height[i])) {
				if (i == n && indexes.empty()) h = 0, i++;
				else h = height[indexes.top()], indexes.pop();			
				l = indexes.empty() ? -1 : indexes.top();
				area = max(area, h * (i - l - 1));
			}
			indexes.push(i);
		}
		return area;
	}
