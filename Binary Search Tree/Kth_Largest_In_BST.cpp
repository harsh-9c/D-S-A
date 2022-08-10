int size(Node* root){
        if(!root) return 0;
        return size(root->left)+size(root->right)+1;
    }

    int solve(Node* root,int& K){
        if(!root) return 0;
        
        int l=solve(root->left,K);
        K--;
        if(K==0) return root->data;
        int r=solve(root->right,K);
        
        return max(l,r);
        
    }

    int kthLargest(Node *root, int K){
        int N=size(root)-K+1;
        return solve(root,N);
    }
