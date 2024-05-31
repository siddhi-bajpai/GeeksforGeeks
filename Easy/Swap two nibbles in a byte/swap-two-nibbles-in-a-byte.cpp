//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        vector<int> binary(8,0);
        int index = 7;
        while (n != 0 && index >= 0) {
        binary[index] = n % 2;
        n = n / 2;
        index--;
        }
        // for(int i=0;i<8;i++){
        //      cout<<binary[i];
        // }
        int prev=0;
        int next=0;
        int pow1=3;
        for(int i=0;i<4;i++){
             prev+=binary[i]*pow(2,pow1);
             pow1--;
        }
        //cout<<prev;
        int pow2=7;
        for(int i=4;i<8;i++){
            next+=binary[i]*pow(2,pow2);
            pow2--;
        }
        //cout<<next;
        return prev+next;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends