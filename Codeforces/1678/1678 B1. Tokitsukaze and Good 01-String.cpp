#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        string s;
        cin>>n>>s;
        for (int i=0; i<n; i+=2)
        {
            if (s[i]!=s[i+1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
