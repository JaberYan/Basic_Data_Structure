#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq2;
    while (true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq2.push(x);
        }
        else if(c==1)
        {
            pq2.pop();
        }
        else if(c==2)
        {
            cout<<pq2.top()<<endl;
        }
        else 
        {
            break;
        }
    }
    
    return 0;
}