//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        // char letter;
        // int max=INT_MIN;
        // for(int i=k;i>0;i--){
        // for(auto z:m){
        //     if(z.second>max){
        //     max=z.second;
        //     letter=z.first; 
        //     cout<<max<<letter<<endl;
        //     }
        // }
        //     m[letter]--;
        //     cout<<m[letter]<<" "<<letter<<endl;
        //     cout<<i<<endl;
        // }
        // int sum=0;
        // for(auto z:m){
        //     sum+=(z.second)*(z.second);
        // }
        // return sum;
        vector<int> v;
        for(auto x:m){
            v.push_back(x.second);
        }
        int max;
        int index;
        while(k--){
             max=0;
             //cout<<max<<endl;
            for(int i=0;i<v.size();i++){
                if(v[i]>max){
                max=v[i];
                index=i;}
                //cout<<max<<" "<<index<<endl;
                
            }
            v[index]=v[index]-1;
            //cout<<v[index]<<" "<<index<<endl;
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i]*v[i];
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends