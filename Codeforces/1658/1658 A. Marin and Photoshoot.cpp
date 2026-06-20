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
        int sum=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='0' && s[i+1]=='0')
                sum+=2;
            else if (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
