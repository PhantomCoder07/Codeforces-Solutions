#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string n;
        cin>>n;
        int mx=0;
        for (int i=0; i<n.length(); i++)
            mx=max(mx,n[i]-'0');
        cout<<mx<<endl;
    }
    return 0;
}
