bool dfs(int node,vector<int> adj[],vector<int>&vis,vector<int>&dfsvis)
{
vis[node]=1;
dfsvis[node]=1;

for(auto it: adj[node])
{
if(!vis[it])
{
  if(dfs(it,adj,vis,dfsvis))
  return true;
}
else if(dfsvis[it])
{
    return true;
}
}
dfsvis[node]=0;
return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
vector<int>vis(A+1,0);
vector<int>dfsvisit(A+1,0);
vector<int>adj[A+1];
for(int i=0;i<B.size();i++)
{
adj[B[i][0]].push_back(B[i][1]);
}
for(int i=1;i<=A;i++)
{
 if(dfs(i,adj,vis,dfsvisit)) return true;
}
return false;
}
