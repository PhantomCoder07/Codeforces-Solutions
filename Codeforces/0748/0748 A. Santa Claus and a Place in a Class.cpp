#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ln=(k-1)/2/m+1;
    int ds=(k-1)/2%m+1;
    cout<<ln<<' '<<ds<<' '<<(k%2?'L':'R')<<endl;
    return 0;
}
