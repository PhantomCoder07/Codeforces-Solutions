#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=0,y=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            char ch;
            cin>>ch;
            if (ch=='*')
            {
                x^=i+1;
                y^=j+1;
            }
        }
    }
    cout<<x<<' '<<y<<endl;
    return 0;
}
