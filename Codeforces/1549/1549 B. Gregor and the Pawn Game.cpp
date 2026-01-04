#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int c=0;
        vector<int> d(n);
        for (int i=0; i<n; i++)
            d[i]=a[i]-'0';
        for (int i=0; i<n; i++)
        {
            if (b[i]=='1')
            {
                if (i>0 && d[i-1]==1)
                {
                    c++;
                    d[i-1]=0;
                }
                else if (d[i]==0)
                    c++;
                else if (i<n-1 && d[i+1]==1)
                {
                    c++;
                    d[i+1]=0;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
