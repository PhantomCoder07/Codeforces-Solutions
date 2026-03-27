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
        bool ans=true;
        for (int i=n-2; i>=0; i--)
        {
            while (a[i]>=a[i+1] && a[i]>0)
            {
                a[i]=floor(a[i]/2);
                c++;
            }
            if (a[i]>=a[i+1])
            {
                ans=false;
                break;
            }
        }
        cout<<(ans?c:-1)<<endl;
    }
    return 0;
}
