
// question
// Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

 // we can think of ncr = n-1cr-1 +(n-1cr)

     
class Solution{
public:
    int nCr(int n, int r){
       int const mod = 1e9+7;
       
       vector<vector<int>>dp(n+1 , vector<int>(r+1));
       for(int i = 0 ; i <= n ; i++){
           for(int j = 0 ; j <= min(i , r) ; j++){
               if(j==0)dp[i][j] = 1;
               else dp[i][j] = (dp[i-1][j]%mod +dp[i-1][j-1] % mod)%mod;
           }
       }
       return dp[n][r];
    }
};
