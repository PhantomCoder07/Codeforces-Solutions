#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int mx=0,c=1;
    for (int i=0; i<n-1; i++)
    {
        if (a[i]<=a[i+1])
            c++;
        else
        {
            mx=max(mx,c);
            c=1;
        }
    }
    mx=max(mx,c);
    cout<<mx<<endl;
    return 0;
}
