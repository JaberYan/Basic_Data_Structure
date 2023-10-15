#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;
        void push(int val)
        {
            v.push_back(val); //o(1)
        }
        void pop()
        {
            v.pop_back(); //o(1)
        }
        int top()
        {
            return v.back(); //o(1)
        }
        int size()
        {
            return v.size(); //o(1)
        }
        bool empty() //o(1)
        {
            if(v.size()==0) return true;
            else return false;
        }
};
int main()
{
    myStack st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // st.pop();
    // if(!st.empty())
    // {
    //     cout<<st.top()<<endl;
    // }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (st.empty()==false) //st.empty() true ;!st.empty() false; 
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}