#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(4);
    for (int i=0; i<4; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if (a[0]+a[1]>a[2] || a[1]+a[2]>a[3])
        cout<<"TRIANGLE"<<endl;
    else if (a[0]+a[1]==a[2] || a[1]+a[2]==a[3])
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
