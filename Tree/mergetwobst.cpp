class Solution
{
    public:
  void inorder(Node* temp , vector<int> &v){
      if(temp == NULL)return ;
      inorder(temp->left , v);
      v.push_back(temp->data);
      inorder(temp->right , v);
  }
  vector<int>mergeboth(vector<int> &bst1 , vector<int>&bst2){
      vector<int>ans(bst1.size()+bst2.size());
      int i = 0 , j = 0 ,k=0;
      while(i < bst1.size() && j < bst2.size()){
          if(bst1[i]<bst2[j]){
              ans[k++] = bst1[i++];
          }
          else {
              ans[k++] = bst2[j++];
          }
      }
      while(i < bst1.size()){
          ans[k++] = bst1[i++];
      }
      while(j < bst2.size()){
          ans[k++] = bst2[j++];
      }
      return ans;
  }
// not needed to convert to bst in gfg problem
 // Node* inordertobst(int s , int e , vector<int> &inorder){
 //      if(s > e)return NULL;
 //      int mid = (s+e)/2;
      
 //      Node* root = new Node(inorder[mid]);
 //      root->left = inordertobst(s , mid-1 , inorder);
 //      root->right = inordertobst(mid+1 , e , inorder);
 //      return root;
 //  }
  
    vector<int> merge(Node *root1, Node *root2)
    {
      vector<int> bst1 , bst2;
      inorder(root1 , bst1);
      inorder(root2 , bst2);
     vector<int>merged =   mergeboth(bst1 , bst2);
    //  int s = 0 , e = merged.size()-1 ;
    //  return inordertobst(s , e , merged);
       return merged;
     
    }
};
