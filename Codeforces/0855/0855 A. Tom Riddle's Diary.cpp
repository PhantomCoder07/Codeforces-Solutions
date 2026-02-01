#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    cin>>n;
    vector<string> s(n),r(n);
    for (int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for (int i=n-1; i>=0; i--)
    {
        f=0;
        for (int j=i-1; j>=0; j--)
        {
            if (s[i]==s[j])
            {
                r[i]="YES";
                f=1;
                break;
            }
        }
        if (f==0)
            r[i]="NO";
    }
    for (int i=0; i<n; i++)
    {
        cout<<r[i]<<endl;
    }
    return 0;
}
