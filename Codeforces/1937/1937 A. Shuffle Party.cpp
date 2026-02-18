#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=1;
        cin>>n;
        while (c*2<=n)
        {
            c*=2;
        }
        cout<<c<<endl;
    }
    return 0;
}
