//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n = matrix.size();
        
        vector<int> ans;
        ans.push_back(matrix[0][0]);
        
        if(n == 1){
            return ans;
        }
        
        int i = 0;
        int j = i + 1;
        
        while(j < n){                                        // upper triangular
            int a = i;
            int b = j;
            while(a <= j && b >= 0){
                ans.push_back(matrix[a][b]);
                a++; 
                b--;
            }
            j++;
        }
        
        i = 1, j = n - 1;
        
        while(i < n-1){                                       // rest of the elements
            int a = i;
            int b = j;
            
            while(a <= j && b >= 1){
                ans.push_back(matrix[a][b]);
                a++; 
                b--;
            }
            
            i++;
        }
            
        ans.push_back(matrix[n-1][n-1]);
        
        return ans;}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends