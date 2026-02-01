#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b;
    for (int i=0; i<n; i++)
        cin>>a[i];
    int c=-1;
    for (int i=0; i<n; i++)
    {
        if (a[i]==1 && c!=-1)
            b.push_back(c);
        c=a[i];
    }
    b.push_back(c);
    cout<<size(b)<<endl;
    for (int i=0; i<b.size(); i++)
        cout<<b[i]<<" ";
    return 0;
}
