#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    int a=n,b=m,c=0;
    while (1)
    {
        if (s[n-1]==t[m-1] && n>=0 && m>=0)
        {
            n--;
            m--;
            c+=2;
        }
        else
            break;
    }
    cout<<(c>(a+b)?0:(a+b)-c)<<endl;
    return 0;
}
