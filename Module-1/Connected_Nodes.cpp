#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];

    memset(adj_mat,0,sizeof(adj_mat));
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;

        bool found=false;
        for(int i=n-1;i>=0;i--)
        {
            if(adj_mat[x][i]==1 && i!=x)
            {
                cout<<i<<" ";
                found=true;
            }
        }

        if(!found) 
            cout<<-1;
        cout<<endl;
    }

    return 0;
}