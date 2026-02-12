#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        if (n==1)
            cout<<fixed<<setprecision(0)<<s<<endl;
        else
            cout<<s/((n/2)+1)<<endl;
    }
    return 0;
}
