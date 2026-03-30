#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    if (n%2)
    {
        for (int i=n-1; i>0; i--)
            if (i%2)
                cout<<s[i];
        cout<<s[0];
        for (int i=1; i<n; i++)
            if (i%2==0)
                cout<<s[i];
        cout<<endl;
    }
    else
    {
        for (int i=n-1; i>=0; i--)
            if (i%2==0)
                cout<<s[i];
        for (int i=1; i<n; i++)
            if (i%2)
                cout<<s[i];
        cout<<endl;
    }
    return 0;
}
