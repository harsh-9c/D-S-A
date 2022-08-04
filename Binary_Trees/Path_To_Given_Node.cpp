bool path(TreeNode* root,vector<int>&ans,int tar){
     if(!root) return false;
     
     ans.push_back(root->val);
     
     if(root->val==tar) return true;
     
     if(path(root->left,ans,tar) || path(root->right,ans,tar)) return true;
     
     ans.pop_back();
     
     return false;
     
 }

vector<int> Solution::solve(TreeNode* root, int tar) {
    
    vector<int>ans;
    
    path(root,ans,tar);
    
    return ans;
    
}
