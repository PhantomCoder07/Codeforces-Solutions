#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,c=0;
        string a,b;
        cin>>n>>m>>a>>b;
        reverse(b.begin(),b.end());
        a+=b;
        for (int i=0; i<(n+m)-1; i++)
            if (a[i]==a[i+1])
                c++;
        if (c<=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
