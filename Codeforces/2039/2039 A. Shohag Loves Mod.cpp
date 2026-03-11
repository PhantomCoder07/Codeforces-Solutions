#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=1;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cout<<m<<' ';
            m+=2;
        }
        cout<<endl;
    }
    return 0;
}
