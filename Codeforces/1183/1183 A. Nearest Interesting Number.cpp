#include <bits/stdc++.h>
using namespace std;
int count_digit (int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int a;
    cin>>a;
    while (count_digit(a)%4!=0)
    {
        a++;
    }
    cout<<a<<endl;
    return 0;
}
