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
        vector<int> a(3*n),b(n);
        int m=1,mx=3*n,j=0,k=1;
        for (int i=0; i<n; i++)
        {
            b[i]=mx-m;
            m+=2;
        }
        for (int i=0; i<3*n; i++)
        {
            if (i%3==0)
                a[i]=k++;
            else if (i%3==1)
                a[i]=b[j];
            else
            {
                a[i]=b[j]+1;
                j++;
            }
        }
        for (int i=0; i<3*n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
