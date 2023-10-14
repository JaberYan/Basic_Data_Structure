#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < m; i++)
    {
        int flag=0;
        int x;
        cin>>x;
        for (int j = 0; j < n; j++)
        {
            if(x==v[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }
    
    return 0;
}