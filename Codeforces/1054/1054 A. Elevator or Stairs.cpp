#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    int st=abs(x-y)*t1;
    int el=(abs(x-z)*t2)+(abs(x-y)*t2)+(3*t3);
    cout<<(st>=el?"YES":"NO")<<endl;
    return 0;
}
