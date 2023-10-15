#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        stack<char> st;
        string oparetion;
        cin>>oparetion;
        int flag=0;
        for (char c : oparetion) 
        {
            if (c == 'A') 
            {
                if (!st.empty() && st.top() == 'B') 
                {
                    st.pop();
                } 
                else
                {
                    st.push(c);
                }
            }
            else 
            {  
                if (!st.empty() && st.top() == 'A') 
                {
                    st.pop();
                } 
                else 
                {
                    st.push(c);
                }
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}