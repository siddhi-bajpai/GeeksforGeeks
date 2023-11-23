//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> res;
         int i=0, j;
         long long sum=0;
         for(int j=0;j<n;j++){
            sum+=arr[j];
            
            if(sum>s){
                while(sum>s && i<j){
                    sum-=arr[i];
                    i++;
                }
            }
            
            if(sum==s){
                res.push_back(i+1);
                res.push_back(j+1);
                break;

            }
    }
    if(res.size()==0)
    res.push_back(-1);
    return res;
    }
};



//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends