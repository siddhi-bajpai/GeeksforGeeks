//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
int smithNum(int n) {
int m=n,i,sum1=0,sum2=0;
if(n==1)
return 0;
for(i=2;i<=n/2;)
{
if(m%i==0)
{
if(i<10)
sum1=sum1+i;
else
{
int j=i;
while(j>0)
{
sum1=sum1+j%10;
j=j/10;
}
}
m=m/i;
}
else
i++;
}
while(n>0)
{
sum2=sum2+n%10;
n=n/10;
}
if(sum1==0)
return 0;
if(sum1==sum2)
return 1;
return 0;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends