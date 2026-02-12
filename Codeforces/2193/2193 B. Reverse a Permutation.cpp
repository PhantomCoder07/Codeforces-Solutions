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
        vector<int> a(n+1);
        for (int i=1; i<=n; i++)
            cin>>a[i];
        int j=1;
        while (j<=n && a[j]==n-j+1)
            j++;
        int k=-1;
        for (int i=j; i<=n; i++)
        {
            if (a[i]==n-j+1)
                k=i;
        }
        for (int i=1; i<j; i++)
            cout<<a[i]<<" ";
        if (k!=-1)
        {
            for (int i=k; i>=j; i--)
                cout<<a[i]<<" ";
            for (int i=k+1; i<=n; i++)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
