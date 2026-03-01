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
        bool ans=false;
        for (int i=0; i<n; i++)
        {
            int sum=0;
            for (int j=0; j<n; j++)
            {
                if (i!=j)
                    sum+=a[j];
            }
            if (sum*1.0/(n-1)==a[i])
            {
                ans=true;
                break;
            }
        }
        if (ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
