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
        int st=0,ed=n-1,c=0;
        while(st<ed)
        {
            if (a[st]==1 && a[ed]==0)
            {
                swap(a[st],a[ed]);
                st++;
                ed--;
                c++;
            }
            else if (a[st]==1 && a[ed]!=0)
                ed--;
            else
                st++;
        }
        cout<<c<<endl;
    }
    return 0;
}
