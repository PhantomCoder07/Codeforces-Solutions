#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> a(7);
        for (int i=0; i<7; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int sum=accumulate(a.begin(),a.end(),0);
        cout<<(-1)*(sum-(2*a[6]))<<endl;
    }
    return 0;
}
