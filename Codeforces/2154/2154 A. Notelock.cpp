#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int c=0,p=-1000;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1' && i-p>=k)
                c++;
            if (s[i]=='1')
                p=i;
        }
        cout<<c<<endl;
    }
    return 0;
}
