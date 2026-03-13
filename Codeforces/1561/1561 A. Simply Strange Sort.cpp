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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (is_sorted(a.begin(),a.end()))
        {
            cout<<0<<endl;
            continue;
        }
        while (1)
        {
            c++;
            if (c%2==1)
            {
                for (int i=0; i<n-1; i+=2)
                    if (a[i]>a[i+1])
                        swap(a[i],a[i+1]);
            }
            else
            {
                for (int i=1; i<n-1; i+=2)
                    if (a[i]>a[i+1])
                        swap(a[i],a[i+1]);
            }
            if (is_sorted(a.begin(),a.end()))
            {
                cout<<c<<endl;
                break;
            }
        }
    }
    return 0;
}
