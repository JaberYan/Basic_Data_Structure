#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i <= m; i++)
    {
        int sum=0;
        int o,u;
        cin>>o>>u;
        for (int j = o; j <= u; j++)
        {
            sum=sum+v[j];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}