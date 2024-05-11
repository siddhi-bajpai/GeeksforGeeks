//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<long long > ans;
  void solve(long long n){
      if(n == 1){
          return;
      }
      if(n % 2 == 1){
          long long t = pow(n , 3.0/2);
          ans.push_back(t);
          n = t;
          solve(t);
      }else{
          long long t = sqrt(n);
          ans.push_back(t);
          n = t;
          solve(t);
      }
  }
    vector<long long> jugglerSequence(long long n) {
        // code here
        ans.push_back(n);
        solve(n);
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        Solution ob;
        vector<long long> ans = ob.jugglerSequence(n);
        for (long long u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends