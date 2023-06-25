
// overview
// Since House[1] and House[n] are adjacent, they cannot be robbed together. Therefore, the 
// problem becomes to rob either House[1]-House[n-1] or House[2]-House[n], depending on
// which choice offers more money. Now the problem has degenerated to the House Robber, which is already been solved.

class Solution {
public:
  int houserobber(vector<int>&nums){
      int dp[nums.size()+1];
      int n = nums.size();
      if(n==1)return nums[0];
      dp[0] = nums[0];
      dp[1] = max(nums[0], nums[1]);
      for(int i= 2 ; i < n ; i++){
          dp[i]= max(dp[i-1] , dp[i-2]+nums[i]);
      }
      return dp[n-1];
  }
    int rob(vector<int>& nums) {
        int  n = nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        if(n==2)return max(nums[0], nums[1]);

        vector<int>v1(nums.begin() , nums.end()-1);
        vector<int> v2 (nums.begin()+1 , nums.end());
        return max(houserobber(v1) , houserobber(v2));
    }
};
