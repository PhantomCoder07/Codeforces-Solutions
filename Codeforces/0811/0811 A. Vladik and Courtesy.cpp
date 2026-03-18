#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=sqrt(a);
    if (a*(a+1)>b)
        cout<<"Valera"<<endl;
    else
        cout<<"Vladik"<<endl;
    return 0;
}
