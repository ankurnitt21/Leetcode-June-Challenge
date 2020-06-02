// using recursive

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL;
        
        if(root->left==NULL && root->right==NULL)
            return root;
        
        TreeNode *temp=root->right;
        root->right=root->left;
        root->left=temp;
        
        if(root->left)
        invertTree(root->left);
        if(root->right)
        invertTree(root->right);
        
        
        return root;
        
        
        
    }
};

// Time Complexity O(h)
//Space Complexity O(n)



// non recursive
class Solution {
public:
    
        TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return root;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* node = q.front();
           
                TreeNode* temp = node->left;
                node->left = node->right;
                node->right = temp;
            
            if(node->left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
            q.pop();
        }
        return root;
        
        
        
    }
};


// Time Complexity O(n)
//Space Complexity O(n)