#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        string s="989";
        for (int i=0; i<n && i<3; i++)
            cout<<s[i];
        for (int i=3; i<n; i++)
        {
            if (c==10)
                c=0;
            cout<<c++;
        }
        cout<<endl;
    }
    return 0;
}
