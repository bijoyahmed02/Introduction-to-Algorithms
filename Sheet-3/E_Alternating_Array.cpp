#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int fp=0;
    int fn=0;
    for(int i=0; i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]<0) fp++;
        }
        else 
        {
            if(a[i]>0) fp++;
        }
        if(i%2==0)
        {
            if(a[i]>0) fn++;
        }
        else 
        {
            if(a[i]<0) fn++;
        }
    }
    cout<<min(fp,fn)<<endl;
    return 0;
}