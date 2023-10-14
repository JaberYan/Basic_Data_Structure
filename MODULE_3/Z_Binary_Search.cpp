#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v,v+n);
    while (m--)
    {
        int x;
        cin>>x;
        int l=0;
        int r=n-1;
        int flag=0;
        while (l<=r)
        {
            int mid_index=(l+r)/2;
            if(v[mid_index]==x)
            {
                flag=1;
                break;
            }
            if(x>v[mid_index])
            {
                l=mid_index+1;
            }
            else
            {
                r=mid_index-1;
            }
        }
        if(flag==0) cout<<"not found"<<endl;
        else cout<<"found"<<endl;
    }
    
    return 0;
}