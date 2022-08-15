class prop{
    
    public:
    bool bst;
    int mi;
    int mx;
    int ms;
    prop(){
        bst=true;
        mi=INT_MAX;
        mx=INT_MIN;
        ms=0;
    }
};

class Solution {
public:
    prop solve(TreeNode* root,int& ans){
        
        if(!root) return prop();
        
        prop p;
        prop pl=solve(root->left,ans);
        prop pr=solve(root->right,ans);
        
        if(pl.bst && pr.bst && root->val>pl.mx && root->val<pr.mi){
            p.bst=true;
            p.ms=pl.ms+pr.ms+root->val;
            p.mi=min(pl.mi,root->val);
            p.mx=max(pr.mx,root->val);
        }
        else{
            p.bst=false;
            p.ms=max(pl.ms,pr.ms);
        }
        
         ans=max(ans,p.ms);
        
        
        return p;
        
    }
    
    int maxSumBST(TreeNode* root) {
        
        int ans=0;
        solve(root,ans);
        return ans;
        
    }
};
