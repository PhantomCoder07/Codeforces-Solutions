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
        for (int i=n-n/2; i<n; i++)
        {
            if (s[i]-s[n-i-1])
            {
                if (c>1)
                {
                    i=n;
                    c=3;
                }
                else
                    c=1;
            }
            else if (c)
                c=2;
        }
        cout<<(c<3?"YES":"NO")<<endl;
    }
    return 0;
}
