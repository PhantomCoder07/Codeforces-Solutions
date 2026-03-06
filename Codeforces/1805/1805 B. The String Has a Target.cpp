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
        int j=0;
        for (int i=1; i<n; i++)
            if (s[i]<=s[j])
                j=i;
        cout<<s.substr(j,1)<<s.substr(0,j)<<s.substr(j+1,n-j-1)<<endl;
    }
    return 0;
}
