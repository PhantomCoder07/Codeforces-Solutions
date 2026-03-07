#include <bits/stdc++.h>
using namespace std;
int f (int n, int m, int x, int y)
{
    if ((x==1 || x==n) && (y==1 || y==m))
        return 2;
    if (x==1 || x==n || y==1 || y==m)
        return 3;
    return 4;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,x1,x2,y1,y2;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        cout<<min(f(n,m,x1,y1),f(n,m,x2,y2))<<endl;
    }
    return 0;
}
