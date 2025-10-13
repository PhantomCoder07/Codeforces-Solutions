#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        for (int i=0; i<n; i++)
            cin>>s[i];
        int mins=INT_MAX;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                int d=0;
                for (int k=0; k<m; k++)
                {
                    d+=abs(s[i][k]-s[j][k]);
                }
                mins=min(mins,d);
            }
        }
        cout<<mins<<endl;
    }
    return 0;
}
