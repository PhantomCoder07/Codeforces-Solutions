#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int m=n;
        m*=4;
        for (int i=0; i<n; i++)
        {
            cout<<m-2*i<<' ';
        }
        cout<<endl;
    }
    return 0;
}
