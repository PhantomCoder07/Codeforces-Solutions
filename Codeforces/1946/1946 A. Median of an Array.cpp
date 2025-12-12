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
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int b=n/2;
        if (n%2!=0)
            b++;
        int c=1;
        for (int i=b; i<n; i++)
        {
            if (a[i]==a[b-1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
