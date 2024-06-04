//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int f=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                s[i]='1';
                f=1;
                break;
            }
            else{
            s[i]='0';}
        }
        if(f==1){
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            return s.substr(i);
            }    
        }
        
        else
        return '1'+ s;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends