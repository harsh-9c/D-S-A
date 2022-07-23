#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {

    int t; cin>>t;
    while(t--){

        int n,c; cin>>n>>c;
        ll int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

         ll int low=1;
         ll int high=a[n-1]-a[0];
        

        while(low<=high){
            ll int mid=(low+high)/2;  

            int cnt=1; ll int prev=a[0];

            for(int i=1;i<n;i++){
                if(cnt>=c) break;
                if(a[i]-prev>=mid) cnt++,prev=a[i];
            }

            if(cnt>=c) low=mid+1;
            else high=mid-1;
 
        }
      
        cout<<high<<"\n";


    }
    


    return 0;


}
