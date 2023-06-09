class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
         long long ss = 0; long long se = 0;
         int s = 0 ; int e = n-1;
         long long sum = 0;
         for(int i = 0 ; i < n ; i++){
             sum += a[i];
         }
         long long p = sum;
         if(n==1){
             return 1;
         }
         for(int i = 0 ; i < n ; i++){
             se += a[i];
             if(p-se-a[i+1] == se){
                 return i+2;
             }
         }
         
         return -1;
    }

};
