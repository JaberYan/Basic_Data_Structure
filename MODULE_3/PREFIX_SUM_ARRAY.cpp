#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int pre[n];
    pre[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    while (m--)
    {
        long long int l,q;
        cin>>l>>q;
        l--;
        q--;
        long long int sum;
        if(l==0) sum=pre[q];
        else sum=pre[q]-pre[l-1];
    }
    
    return 0;
}