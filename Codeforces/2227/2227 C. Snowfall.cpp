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
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            if (a[i]%6==0)
                cout<<a[i]<<' ';
        for (int i=0; i<n; i++)
            if (a[i]%6 && a[i]%2==0)
                cout<<a[i]<<' ';
        for (int i=0; i<n; i++)
            if (a[i]%6 && a[i]%2 && a[i]%3)
                cout<<a[i]<<' ';
        for (int i=0; i<n; i++)
            if (a[i]%6 && a[i]%3==0 && a[i]%2)
                cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
