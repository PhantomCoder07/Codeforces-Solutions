#include <bits/stdc++.h>
using namespace std;
vector<int> a{0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int m,d;
    cin>>m>>d;
    cout<<((d-1)+a[m]-1)/7+1<<endl;
    return 0;
}
