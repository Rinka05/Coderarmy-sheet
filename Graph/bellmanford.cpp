class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int n, vector<vector<int>>& edges, int src) {
        
        int m = edges.size();
        vector<int>dist(n , 1e8);
        dist[src] = 0;
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = 0 ; j < m ; j++){
                int u = edges[j][0];
                int v = edges[j][1];
                int wt = edges[j][2];
                if(dist[u]!= 1e9 && dist[u]+wt < dist[v]){
                    dist[v] = dist[u]+wt;
                }
            }
        }
        // check for negative cycle
        bool flag = 0;
        for(int j = 0 ; j < m ; j++){
             int u = edges[j][0];
                int v = edges[j][1];
                int wt = edges[j][2];
                if(dist[u]!= 1e9 && dist[u]+wt < dist[v]){
                   flag = 1;
                   break;
                }
        }
       
        if(flag == 0){
            return dist;
        }
        else {
            return {-1};
        }
        
    }
};
