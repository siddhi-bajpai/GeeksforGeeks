//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        int x=0;
        int y=0;
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(int(it.first)%2==0 && it.second%2==0)
            x++;
            else if(int(it.first)%2!=0 && it.second%2!=0)
            y++;
        }
        if((x+y)%2==0)
        return "EVEN";
        else
        return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends