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
        int m=1;
        if (n%2!=0)
        {
            for (int i=n-1; i>=0; i--)
            {
                if (i%2==0)
                    a[i]=m++;
            }
            for (int i=0; i<n; i++)
            {
                if (i%2!=0)
                    a[i]=m++;
            }
        }
        else
        {
            for (int i=n-1; i>=0; i--)
            {
                if (i%2!=0)
                    a[i]=m++;
            }
            for (int i=0; i<n; i++)
            {
                if (i%2==0)
                    a[i]=m++;
            }
        }
        for (int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
