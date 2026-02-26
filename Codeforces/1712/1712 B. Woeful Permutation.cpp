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
        vector<int> a(n);
        if (n%2==0)
        {
            int m=2,k=1;
            for (int i=0; i<n; i++)
            {
                if (i%2==0)
                {
                    a[i]=m;
                    m+=2;
                }
            }
            for (int i=0; i<n; i++)
            {
                if (i%2==1)
                {
                    a[i]=k;
                    k+=2;
                }
            }
        }
        else
        {
            int m=2,k=3;
            a[0]=1;
            for (int i=1; i<n; i++)
            {
                if (i%2==0)
                {
                    a[i]=m;
                    m+=2;
                }
            }
            for (int i=1; i<n; i++)
            {
                if (i%2==1)
                {
                    a[i]=k;
                    k+=2;
                }
            }
        }
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
