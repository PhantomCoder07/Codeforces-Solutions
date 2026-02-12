#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,j=0;
        cin>>n;
        vector<int> a(2*n),b(2*n);
        for (int i=0; i<2*n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for (int i=0; i<2*n; i++)
        {
            if (i%2==0)
                b[i]=a[j++];
        }
        for (int i=0; i<2*n; i++)
        {
            if (i%2!=0)
                b[i]=a[j++];
        }
        for (int i=0; i<2*n; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
