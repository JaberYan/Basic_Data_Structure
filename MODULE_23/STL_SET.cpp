#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x); //o(logN)
    }
    // cout<<s.count(10)<<endl; //o(logN)
    // if(s.count(10)) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
if(s.count(100)==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<endl;
    //     // v.push_back(*it);
    // }
    // reverse(v.begin(),v.end());
    // for(int val:v)
    // {
    //     cout<<val<<endl;
    // }
    return 0;
}