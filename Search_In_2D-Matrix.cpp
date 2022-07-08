// Approach-1 
 
// Time Complexity -> NlogM

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=0; 
        bool f=false;
        while(row<matrix.size()){
            int low=0;
            int high=matrix[0].size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(matrix[row][mid]==target){
                    f=true;
                    break;
                }
                else if(matrix[row][mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(f) break;
            row++;
        }
        
        if(f) return true;
        return false;
    }

// Approach-2
 
// Time Complexity -> log(NM)
  
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row_num = matrix.size();
	    int col_num = matrix[0].size();
	
	int begin = 0, end = row_num * col_num - 1;
	
	while(begin <= end){
		int mid = (begin + end) / 2;
		int mid_value = matrix[mid/col_num][mid%col_num];
		
		if( mid_value == target){
			return true;
		
		}else if(mid_value < target){
			//Should move a bit further, otherwise dead loop.
			begin = mid+1;
		}else{
			end = mid-1;
		}
	}
	
	return false;
    }
