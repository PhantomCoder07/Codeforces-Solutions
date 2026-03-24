#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int mx=*max_element(a.begin(),a.end());
    cout<<(mx<25?0:mx-25)<<endl;
    return 0;
}
