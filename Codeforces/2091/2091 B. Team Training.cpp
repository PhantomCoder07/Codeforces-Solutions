#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        int m=0,c=0;
        for(int i=0; i<n; i++)
        {
            c++;
            if(c*a[i]>=x)
            {
                m++;
                c=0;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
