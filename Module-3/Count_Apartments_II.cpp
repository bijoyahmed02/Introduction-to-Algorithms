#include<bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
int level[1000][1000];
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}

int bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    level[si][sj]=0;
    int c_room = 1; 

    while(!q.empty())
    {
        pair<int,int> par=q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<4;i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]=level[par_i][par_j]+1;
                c_room++; 
            }
        }
    }
    return c_room;  
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    vector<int> apart_room;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && grid[i][j]=='.')
            {
                int room = bfs(i,j); 
                apart_room.push_back(room);
            }
        }
    }

    if(apart_room.empty())
    {
        cout <<0<<endl;
        return 0;
    }
    sort(apart_room.begin(), apart_room.end());
    for(int i=0;i<apart_room.size();i++)
    {
        cout << apart_room[i];
        if(i != apart_room.size()-1) 
            cout <<" ";
    }
    cout <<endl;;
    return 0;
}