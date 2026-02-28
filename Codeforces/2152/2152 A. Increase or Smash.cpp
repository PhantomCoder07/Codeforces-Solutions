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
        vector<int> a(101,0);
        for (int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        for (int i=1; i<=100; i++)
            if (a[i]>0)
                c++;
        cout<<c*2-1<<endl;
    }
    return 0;
}
