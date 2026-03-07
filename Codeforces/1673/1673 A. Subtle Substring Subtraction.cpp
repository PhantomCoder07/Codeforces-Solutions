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
        int suma=0,sumb=0;
        if (n==1)
        {
            cout<<"Bob "<<s[0]-'a'+1<<endl;
        }
        else if (n%2==0)
        {
            for (int i=0; i<n; i++)
                suma+=(s[i]-'a')+1;
            cout<<"Alice "<<suma<<endl;
        }
        else
        {
            for (int i=n-1; i>0; i--)
                suma+=(s[i]-'a')+1;
            sumb=s[0]-'a'+1;
            int d1=suma-sumb;
            sumb=s[n-1]-'a'+1;
            suma=(suma-sumb)+(s[0]-'a'+1);
            int d2=suma-sumb;
            cout<<"Alice "<<max(d1,d2)<<endl;
        }
    }
    return 0;
}
