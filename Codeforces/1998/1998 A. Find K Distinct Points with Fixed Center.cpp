#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        for (int i=1; i<=k/2; i++)
        {
            cout<<x-i<<" "<<y<<endl;
            cout<<x+i<<" "<<y<<endl;
        }
        if (k%2!=0)
            cout<<x<<" "<<y<<endl;
    }
    return 0;
}
