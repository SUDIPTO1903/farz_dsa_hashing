// Last updated: 7/19/2026, 2:42:59 AM
class Solution {
public:

    vector<vector<int>> g;
    vector<int> vis;

    void dfs(int node){

        vis[node]=1;

        for(auto neighbour:g[node]){

            if(!vis[neighbour]){

                dfs(neighbour);

            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n=isConnected.size();

        g.resize(n);

        // Convert adjacency matrix into adjacency list
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(i!=j && isConnected[i][j]){

                    g[i].push_back(j);

                }
            }
        }

        vis.assign(n,0);

        int component_number=0;

        for(int i=0;i<n;i++){

            if(!vis[i]){

                component_number++;

                dfs(i);

            }
        }

        return component_number;
    }
};