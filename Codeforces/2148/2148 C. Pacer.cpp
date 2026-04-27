#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,c=0;
        cin>>n>>m;
        while (n--)
        {
            int a,b;
            cin>>a>>b;
            if ((a+c)%2!=b%2)
                c++;
        }
        cout<<m-c<<endl;
    }
    return 0;
}
