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
        bool ans=true;
        for (int i=1; i<n; i++)
        {
            if (a[i]!=i)
            {
                if (a[i+1]==i && a[i]==i+1)
                    swap(a[i],a[i+1]);
                else
                {
                    ans=false;
                    break;
                }
            }
        }
        cout<<(!ans?"NO":"YES")<<endl;
    }
    return 0;
}
