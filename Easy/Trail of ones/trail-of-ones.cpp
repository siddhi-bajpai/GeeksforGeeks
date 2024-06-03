//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long Pow(int n, int m){
        if(m==0)
        return 1;
        
        long half=Pow(n,m/2)%(long)(1e9+7);
        if(m%2==1) return half*half*n;
        return half*half;
    }
    int numberOfConsecutiveOnes(int n) {
        // code here
        long int prev1=0;
        long int prev2=0;
        long MOD = (long)1e9+7;
        long i=2;
        long x=0;
        while(i<=n){
            x=(Pow(2, i - 2)+prev1+prev2)%MOD;
            prev2=prev1;
            prev1=x;
            i++;
        }
        return (int)x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends