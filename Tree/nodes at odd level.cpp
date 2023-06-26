class Solution
{
public:
    vector<Node *> nodesAtOddLevels(Node *root)
    {
        vector<Node*>v;
        queue<pair<Node* , int> >q;
        q.push(make_pair(root, 1));
        while(!q.empty()){
           pair< Node*, int>tmp = q.front();
             q.pop();
            Node* frontnode = tmp.first;
            int level = tmp.second;
             if(level %2 != 0){
                 v.push_back(frontnode);
             }
             if(frontnode->left){
                 q.push(make_pair(frontnode->left , level+1));
             }
             if(frontnode->right){
                 q.push(make_pair(frontnode->right , level+1));
             }
            
        }
        return v;
    }
};
