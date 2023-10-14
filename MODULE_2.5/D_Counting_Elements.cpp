#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0+1;j<n;j++)
        {
            if(v[i]+1==v[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}