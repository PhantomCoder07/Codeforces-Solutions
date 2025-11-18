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
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a.begin(),a.end());
        for (int i=0; i<n; i++)
        {
            if (a[i]%2!=b[i]%2)
            {
                c=1;
                break;
            }
        }
        if (c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
