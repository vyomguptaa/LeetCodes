//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    void dfs(int top, vector<int> adj[], int vis[], vector<int> &lis){
        vis[top] = 1;
        lis.push_back(top);
        for(auto c: adj[top]){
            if(!vis[c]){
                dfs(c,adj, vis,lis);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int start=0;
        vector<int> lis;
        dfs(start,adj,vis,lis);
        // while(!q.empty()){
        //     int top=q.front();
        //     q.pop();
        //     bfs.push_back(top);
        //     for(auto c:adj[top]){
        //         if(!vis[c]){
        //             vis[c]=1;
        //             q.push(c);
        //         }
        //     }
        // }
        return lis;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends