class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int>ans;
      queue<Node*> q;
      q.push(node);
      
      
      while(!q.empty()){
          Node* tmp = q.front();
          int val = tmp->data;
          q.pop();
          ans.push_back(val);
          if(tmp->left){
              q.push(tmp->left);
          }
          if(tmp->right){
              q.push(tmp->right);
          }
      }
      return ans ;
    }
};
