#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int sum_a=a1+a2+a3;
    int sum_b=b1+b2+b3;
    if (n==1 && sum_a!=0 && sum_b!=0)
        cout<<"NO"<<endl;
    else if (sum_a==0 && sum_b==0)
        cout<<"YES"<<endl;
    else
    {
        while (1)
        {
            if (sum_a==0)
                break;
            if (sum_a>5)
            {
                n--;
                sum_a-=5;
            }
            else if (sum_a<=5)
            {
                n--;
                break;
            }
        }
        while (1)
        {
            if (sum_b==0)
                break;
            if (sum_b>10)
            {
                n--;
                sum_b-=10;
            }
            else if (sum_b<=10)
            {
                n--;
                break;
            }
        }
        if (n>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
