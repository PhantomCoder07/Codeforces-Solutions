#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++)
        cin>>a[i];
    int c=0,mx=0;
    for (int i=1; i<=n; i++)
    {
        c=0;
        int j=a[i];
        while (j!=-1)
        {
            j=a[j];
            c++;
        }
        mx=max(mx,c);
    }
    cout<<mx+1<<endl;
    return 0;
}
