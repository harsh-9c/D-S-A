/*

* 3 Types of questions from pascal traingle 

1. Print the pascal triangle for n rows
2. Print the nth row of pascal triangle
3. Print the number at nth row and mth col


                                                    n-1
 * Formula to compute no at n th row and mth col ->    C
                                                         r-1
                                                         

*/



vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++){
            vector<int>a(i+1);
            a[0]=a[i]=1;
            for(int j=1;j<i;j++){
                a[j]=v[i-1][j]+v[i-1][j-1];
            }
            v.push_back(a);
        }
        
        return v;
        
    }
