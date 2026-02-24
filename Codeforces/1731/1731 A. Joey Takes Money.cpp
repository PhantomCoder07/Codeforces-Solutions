#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,a,multi=1;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a;
            multi*=a;
        }
        cout<<2022*(multi+(n-1))<<endl;
    }
    return 0;
}
