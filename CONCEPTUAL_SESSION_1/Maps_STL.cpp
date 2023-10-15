#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int> mp;
    while(t--)
    {
        int a;
        cin>>a;
        string name;
        cin>>name;
        if(a == 1)
        {
            int marks;
            cin>>marks;
            if(mp.count(name))
            {
                mp[name]+=marks;
            }
            else
            {
                mp[name]=marks;
            }
        }
        else if(a == 2)
        {
            mp[name]=0;
        }
        else
        {
            cout<<mp[name]<<endl;
        }
    }
    return 0;
}