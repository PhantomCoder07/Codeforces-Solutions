#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int c0=0,c1=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
                c1=k;
            else if (c1>0)
                c1--;
            else
                c0++;
        }
        cout<<c0<<endl;
    }
    return 0;
}
