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
        int c=0,sum=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]!='0' && i<n-1)
                c++;
            sum+=s[i]-'0';
        }
        cout<<sum+c<<endl;
    }
    return 0;
}
