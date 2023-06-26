 // A Binary tree is Perfect Binary Tree in which all internal nodes have two children and all leaves are at same level.


class Solution
{
public:
    bool isPerfect(Node *root)
    {
        if(root==NULL)return true ;
         if(root->left ==NULL && root->right == NULL ){
            return true ;
        }
        if(root->left == NULL || root->right == NULL)return false ;
        if(root->left->left != NULL && root->right->right == NULL){
            return false ;
        }
        
        if(root->left->left ==NULL && root->right->right != NULL ){
            return false ;
        }
       
        if( root->left!= NULL && root->right!= NULL){
           return isPerfect(root->left)&&isPerfect(root->right);
        }
       return false;
        
    }
};
