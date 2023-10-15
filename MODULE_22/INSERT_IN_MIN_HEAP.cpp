#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
        int cur_idx=v.size()-1;
        while (cur_idx!=0)
        {
            int parent_idx=(cur_idx-1)/2;
            if(v[parent_idx]>v[cur_idx])
            {
                swap(v[parent_idx],v[cur_idx]);
            }
            else
            {
                break;
            }
            cur_idx=parent_idx;
        }
    }
    // int c;
    // cin>>c;
    // v.push_back(c);
    // int cur_idx=v.size()-1;
    // while (cur_idx!=0)
    // {
    //     int parent_idx=(cur_idx-1)/2;
    //     if(v[parent_idx]>v[cur_idx])
    //     {
    //         swap(v[parent_idx],v[cur_idx]);
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     cur_idx=parent_idx;
    // }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}