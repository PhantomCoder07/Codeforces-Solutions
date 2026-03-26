#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        if (n%2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        bool ans=false;
        while (n>2)
        {
            int d=n/2;
            if (d%2)
            {
                ans=true;
                break;
            }
            n/=2;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
