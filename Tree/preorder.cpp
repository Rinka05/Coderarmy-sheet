struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void preorder(Node* root , vector<int>& ans){
        if(root== NULL)return ;
         ans.push_back(root->data);
        preorder(root->left , ans);
       preorder(root->right , ans);
    }
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
    vector<int> ans;
    
    preorder(root , ans );
    return ans ;
}
