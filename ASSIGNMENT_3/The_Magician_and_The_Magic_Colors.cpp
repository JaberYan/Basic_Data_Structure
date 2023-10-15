#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        queue<char> st;
        queue<char> magic;
        queue<char> magic2;
        int m;
        cin>>m;
        string oparetion;
        cin>>oparetion;
        for(char c:oparetion)
        {
            if(c=='R' || c=='G' || c=='B')
            {
                if(st.empty()) st.push(c);
                else if(c=='R' && st.front()=='B' || c=='B' && st.front()=='R')
                {
                    magic.push('P');
                    st.pop();
                }
                else if(c=='R' && st.front()=='G' || c=='G' && st.front()=='R')
                {
                    
                    magic.push('Y');
                    st.pop();
                }
                else if(c=='B' && st.front()=='G' || c=='G' && st.front()=='B')
                {
                    magic.push('C');
                    st.pop();
                }  
            }
            else
            {
                st.push(c);
            }
        }
        if(!st.empty())
        {
            while (!st.empty())
            {
                magic.push(st.front());
                st.pop();
            }
        }
            char a = magic.front();
            magic.pop();
            bool repeat = false;
            while (!magic.empty())
            {
                if(magic.front()== a)
                {
                    magic.pop();
                    a = magic.front();
                    magic.pop();
                    repeat = true;
                }

              else
                {
                    if(repeat) cout << a;
                    a = magic.front();
                    magic.pop();
                    cout << a;
                    repeat = false;
                }
            }
        // while (!magic.empty())
        // {
        //     if(!magic2.empty() && magic2.front()=='R')
        //     {
        //         magic2.pop();
        //     }
        //     else if(!magic2.empty() && magic2.front()=='G')
        //     {
        //         magic2.pop();
        //     }
        //     else if(!magic2.empty() && magic2.front()=='B')
        //     {
        //         magic2.pop();
        //     }
        //     else if(!magic2.empty() && magic2.front()=='P')
        //     {
        //         magic2.pop();
        //     }
        //     else if(!magic2.empty() && magic2.front()=='Y')
        //     {
        //         magic2.pop();
        //     }
        //     else if(!magic2.empty() && magic2.front()=='C')
        //     {
        //         magic2.pop();
        //     }
        //     else 
        //     {
        //         magic2.push(magic.front());
        //     }
        //     magic.pop();
        // }
        // while (!magic.empty())
        // {
        //     cout<<magic.front();
        //     magic.pop();
        // }
        cout<<endl;
    }
    return 0;
}
