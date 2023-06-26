int i ;
Node* solve(int n , int pre[] , char preLN[]){
    Node* root = new Node(pre[i]);
    if(preLN[i++]=='L')return root ;
    root->left = solve(n , pre , preLN);
    root->right = solve(n , pre , preLN);
    return root ;
}
// function should return the root of the new binary tree formed
struct Node *constructTree(int n, int pre[], char preLN[])
{
    i = 0;
    return solve(n , pre , preLN);
}
