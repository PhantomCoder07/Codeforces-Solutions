#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int a,b;
    bool ans=false;
    for (int i=0; i<n; i++)
    {
        cin>>s>>b>>a;
        if (b>=2400 && a>b)
            ans=true;
    }
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
