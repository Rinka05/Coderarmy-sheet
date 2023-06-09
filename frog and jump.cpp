class Solution {
  public:
    int unvisitedLeaves(int n, int leaves, int frogs[]) {
       vector<int>v(leaves+1 , 0);
        
       if(frogs[0] == 1){
           return 0;
       }
     
      
       int cnt =0;
       for(int i = 0 ; i <n ; i++){
           int p = frogs[i];
           if(p <= leaves and !v[p]){
           for(int j = p ; j <= leaves ; j +=p){
              
                   v[j] = 1 ;
               
           }
           }
          
       }
       for(int i = 1 ; i <= leaves;i++){
           if(v[i]== 0)cnt++;
       }
       return cnt;
    }
};
