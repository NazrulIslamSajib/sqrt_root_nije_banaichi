/*
Bismillah hir rahmanir rahim
*/
#include<bits/stdc++.h>
using namespace std;
long long SQRT(long long a)
{
    long long x=sqrt(a)+2;
    while(x*x>a)
        x--;
    return x;
}
int main()
{
    long long tt;
    cin>>tt;

    while(tt--)
    {
        long long n;
        cin>>n;
        cout<<SQRT(n-1)<<endl;
    }

    return 0;
}
