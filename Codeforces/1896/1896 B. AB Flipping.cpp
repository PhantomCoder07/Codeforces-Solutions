#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int a=0,b=0;
        for (int i=n-1; i>=0; i--)
        {
            if (s[i]=='B')
                break;
            a++;
        }
        for (int i=0; i<n; i++)
        {
            if (s[i]=='A')
                break;
            b++;
        }
        cout<<max(0,n-a-b-1)<<endl;
    }
    return 0;
}
