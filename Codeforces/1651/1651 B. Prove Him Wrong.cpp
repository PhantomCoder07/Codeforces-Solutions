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
        if (n<20)
        {
            cout<<"YES"<<endl;
            for (int i=0; i<n; i++)
            {
                cout<<m<<' ';
                m*=3;
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
