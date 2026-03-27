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
        int mx5=-1,mx0=-1;
        for (int i=n-1; i>=0; i--)
        {
            if (s[i]=='0')
            {
                mx0=i;
                break;
            }
        }
        for (int i=n-1; i>=0; i--)
        {
            if (s[i]=='5')
            {
                mx5=i;
                break;
            }
        }
        int ans1=INT_MAX,ans2=INT_MAX;
        if (mx0!=-1)
        {
            for (int i=mx0-1; i>=0; i--)
            {
                if (s[i]=='0')
                {
                    ans1=min(ans1,(n-mx0-1)+(mx0-i-1));
                    break;
                }
            }
        }
        if (mx0!=-1)
        {
            for (int i=mx0-1; i>=0; i--)
            {
                if (s[i]=='5')
                {
                    ans1=min(ans1,(n-mx0-1)+(mx0-i-1));
                    break;
                }
            }
        }
        if (mx5!=-1)
        {
            for (int i=mx5-1; i>=0; i--)
            {
                if (s[i]=='2')
                {
                    ans2=min(ans2,(n-mx5-1)+(mx5-i-1));
                    break;
                }
            }
        }
        if (mx5!=-1)
        {
            for (int i=mx5-1; i>=0; i--)
            {
                if (s[i]=='7')
                {
                    ans2=min(ans2,(n-mx5-1)+(mx5-i-1));
                    break;
                }
            }
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}
