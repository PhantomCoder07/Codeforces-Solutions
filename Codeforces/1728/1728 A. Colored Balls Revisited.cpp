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
        int mx=0,j=0;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (mx<a[i])
            {
                mx=a[i];
                j=i;
            }
        }
        cout<<j+1<<endl;
    }
    return 0;
}
