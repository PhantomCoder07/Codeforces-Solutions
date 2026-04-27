#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]%2)
            o++;
        else
            e++;
    }
    cout<<min(o,e)<<endl;
    return 0;
}
