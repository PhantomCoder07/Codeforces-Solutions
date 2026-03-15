#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g;
        int ans=b+abs(a-f)+g;
        ans=min(ans,a+abs(b-g)+f);
        ans=min(ans,(d-b)+abs(a-f)+(d-g));
        ans=min(ans,(w-a)+abs(b-g)+(w-f));
        cout<<ans+h<<endl;
    }
    return 0;
}
