#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,c=0;
    cin>>n>>d;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i!=j && abs(a[i]-a[j])<=d)
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
