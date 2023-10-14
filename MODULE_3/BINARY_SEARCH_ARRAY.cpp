#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int left=0;
    int right=n-1;
    bool flag=false;
    while (left<=right)
    {
        int mid_index=(left+right)/2;
        if(a[mid_index]==x)
        {
            flag=true;
            break;
        }
        if(x>a[mid_index])
        {
            //dane jao
            left=mid_index+1;
        }
        else
        {
            //bame jao
            right=mid_index-1;
        }
    }
    cout<<left<<" "<<right<<endl;
    if(flag==false) cout<<"not found"<<endl;
    else cout<<"found"<<endl;
    return 0;
}