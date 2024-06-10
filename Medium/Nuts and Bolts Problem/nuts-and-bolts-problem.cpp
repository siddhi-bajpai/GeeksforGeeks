//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

        void matchPairs(int n, char nuts[], char bolts[]) {
        // Predefined order of characters
        char charr[] = {'!', '#', '$', '%', '&', '*', '?', '@', '^'};
        
        // Vectors to store matched nuts and bolts in the predefined order
        vector<char> nut;
        vector<char> bolt;
        
        // Matching and storing nuts and bolts in order
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < n; j++) {
                if (charr[i] == nuts[j]) {
                    nut.push_back(nuts[j]);
                }
                if (charr[i] == bolts[j]) {
                    bolt.push_back(bolts[j]);
                }
            }
        }
        
        // Reconstructing the original nuts and bolts arrays
        for (int i = 0; i < n; i++) {
            nuts[i] = nut[i];
            bolts[i] = bolt[i];
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends