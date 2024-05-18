//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int diff[n]={0};
        for(int i=0;i<n;i++){
            diff[i]=abs(arr[i]-k);
        }
        int min_diff=diff[0];
        int index=0;
        for(int i=0;i<n;i++){
            if(min_diff==diff[i]){
                if(arr[i]>arr[index])
                index=i;
            }
            if(min_diff>diff[i]){
                min_diff=diff[i];
                index=i;
            }
           
        }
        return arr[index];
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends