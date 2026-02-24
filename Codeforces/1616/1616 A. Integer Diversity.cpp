#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> a(n),b(101,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]<0)
                b[(-1)*a[i]]++;
            else if (a[i]==0)
                c=1;
            else
                b[a[i]]++;
        }
        for (int i=0; i<=100; i++)
        {
            if (b[i]==1)
                c++;
            else if (b[i]>=2)
                c+=2;
        }
        cout<<c<<endl;
    }
    return 0;
}
