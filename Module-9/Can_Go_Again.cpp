#include<bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a,b,c;
    Edge(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

long long dis[1005];
vector<Edge> edge_list;
int n,e;
bool bellman_ford(int s)
{
    for(int i=1;i<=n;i++)
        dis[i] = LLONG_MAX;
    dis[s] = 0;
    for(int i=1;i<=n-1;i++)
    {
        for(auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if(dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for(auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if(dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));
    }

    int s;
    cin>>s;
    bool cycle = bellman_ford(s);
    if(cycle)
    {
        cout<<"Negative Cycle Detected";
        return 0;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;

        if(dis[d] == LLONG_MAX)
            cout<<"Not Possible"<<endl;
        else
            cout<<dis[d]<<endl;
    }

    return 0;
}