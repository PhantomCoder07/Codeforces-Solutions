#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int lt=0,gt=0,eq=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='>')
                gt++;
            if (s[i]=='<')
                lt++;
            if (s[i]=='=')
                eq++;
        }
        if (gt>0 && lt==0)
            cout<<'>'<<endl;
        else if (lt>0 && gt==0)
            cout<<'<'<<endl;
        else if (eq>0 && gt==0 && lt==0)
            cout<<'='<<endl;
        else
            cout<<'?'<<endl;
    }
    return 0;
}
