#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=abs(a-b);
    int y=x/2;
    int z=x-(x/2);
    cout<<(y*(y+1)/2)+(z*(z+1)/2)<<endl;
    return 0;
}
