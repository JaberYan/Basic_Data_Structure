#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n,m;
    cin>>n>>m;
    list<int> stacklist;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    } 
    while (st.empty()==false)
    {
        stacklist.push_back(st.top());
        st.pop();
    }
    queue<int> q;
    list<int> queuelist;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        queuelist.push_back(q.front());
        q.pop();
    }
    int flag=0;
    if(stacklist==queuelist) flag=1;
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}