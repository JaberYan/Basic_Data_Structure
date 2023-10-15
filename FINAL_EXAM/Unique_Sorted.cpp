#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int> l;
        while (n--)
        {
            int val;
            cin>>val;
            l.push_back(val);
        }
        set<int> s;
        while (!l.empty())
        {
            s.insert(l.front());
            l.pop_front();
        }
        vector<int> v;
        for(int i:s)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}