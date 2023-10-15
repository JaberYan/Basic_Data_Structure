#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> ticket_cout;
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        if(m==0)
        {
            string name;
            cin>>name;
            ticket_cout.push(name);
        }
        else if(m==1)
        {
            if(!ticket_cout.empty())
            {
                cout<<ticket_cout.front()<<endl;
                ticket_cout.pop();
            }
            else 
            {
                cout<<"Invalid"<<endl;
            }
        }  
        else if(ticket_cout.empty())
        {
            cout<<"Invalid"<<endl;
        } 
    }
    return 0;
}