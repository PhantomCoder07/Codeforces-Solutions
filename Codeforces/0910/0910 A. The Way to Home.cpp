#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    string s;
    cin>>n>>d>>s;
    int i=0,c=0;
    while (i<n-1 && c<=n)
    {
        if (s[i]=='1')
        {
            i+=d;
            c++;
        }
        else
            i--;
    }
    if (c>=n)
        cout<<-1<<endl;
    else
        cout<<c<<endl;
    return 0;
}
