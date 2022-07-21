static bool cmp(Item a,Item b){
        return (double)a.value/(double)a.weight > (double)b.value/(double)b.weight;
    }
  
    
    double fractionalKnapsack(int W, Item arr[], int n){
        
        sort(arr,arr+n,cmp);
        
        double ans; 
        
        for(int i=0;i<n;i++){
            if(arr[i].weight<=W){
                W-=arr[i].weight;
                ans+=arr[i].value;
            }
            else{
                ans+=(W*((double)arr[i].value/(double)arr[i].weight));
                break;
            }
        }
        
        return ans;
    
        
    }
