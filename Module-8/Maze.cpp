#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
pair<int,int> parent[105][105];
int n,m;
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m && grid[i][j]!='#' && !vis[i][j];
}

void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    parent[si][sj]={-1,-1};
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for(int i=0;i<4;i++)
        {
            int ci=par_i+d[i].first;
            int cj=par_j+d[i].second;
            if(valid(ci,cj))
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                parent[ci][cj]={par_i, par_j};
                if(ci==di && cj==dj)
                {
                    return;
                }
            }
        }
    }
}

void m_path(int si, int sj, int di, int dj)
{
    if(!vis[di][dj]) return; 
    int x=di, y=dj;
    while(!(x==si && y==sj))
    {
        if(grid[x][y]!='D') 
            grid[x][y]='X';
        auto p = parent[x][y];
        x=p.first;
        y=p.second;
    }
}

int main()
{
    cin>>n>>m;
    int si=-1,sj=-1,di=-1,dj=-1;  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='R') si=i,sj=j;
            if(grid[i][j]=='D') di=i,dj=j;
        }
    }
    memset(vis,false,sizeof(vis));
    bfs(si,sj,di,dj);
    m_path(si,sj,di,dj);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<grid[i][j];
        cout<<endl;
    }
    return 0;
}