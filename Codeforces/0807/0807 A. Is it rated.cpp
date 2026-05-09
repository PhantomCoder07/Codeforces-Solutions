#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    bool ans1,ans2=true;
    for (int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        ans1=(a==b);
        if (ans1 && i!=0 && a[i]>a[i-1])
            ans2=false;
    }
    cout<<(ans1 && !ans2?"unrated":(ans1 && ans2?"maybe":"rated"))<<endl;
    return 0;
}
