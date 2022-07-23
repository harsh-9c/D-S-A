int countSmaller(vector<int> &matrix,int num){
     int n=matrix.size();
    
     int l=0;
     int r=n-1;
    
    while(l<=r){
        int mid=(l+r)/2;
        if(matrix[mid]<=num) l=mid+1;
        else r=mid-1;
    }
    
    return l;
   
}
int getMedian(vector<vector<int>> &matrix){
    
    int n=matrix.size();
    int m=matrix[0].size();
    
    int low=1;
    int high=1e5;
    
    while(low<=high){
        int mid=(low+high)/2; 
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=countSmaller(matrix[i],mid); 
        }
       
        if(cnt<=(n*m)/2) low=mid+1;
        else high=mid-1;
              
    }
    
    return low;
    
    
}
