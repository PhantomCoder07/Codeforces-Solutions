#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        char s[n][n];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin>>s[i][j];
            }
        }
        for (int i=0; i<n; i+=k)
        {
            for (int j=0; j<n; j+=k)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
