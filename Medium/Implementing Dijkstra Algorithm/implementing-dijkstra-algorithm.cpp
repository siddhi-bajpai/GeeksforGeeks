//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
   vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int,int>> s;
        vector<int> dis(V,INT_MAX);
        
        dis[S]=0;
        s.insert({0,S});
        
        while(!s.empty()){
            auto it=*(s.begin());
            int node=it.second;
            int dist=it.first;
            s.erase(it);
            
            for(auto i:adj[node]){
                int adjNode=i[0];
                int edgeW=i[1];
                if(dist+edgeW < dis[adjNode]){
                    if(dis[adjNode]!=INT_MAX){
                        s.erase({dis[adjNode],adjNode});
                    }
                    dis[adjNode] = dist+edgeW;
                    s.insert({dis[adjNode],adjNode});
                }
            }
        }
        return dis;
       
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends