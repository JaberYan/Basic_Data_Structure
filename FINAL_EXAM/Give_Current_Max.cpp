#include <bits/stdc++.h>
using namespace std;
class StudentID
{
public:
    string name;
    int roll;
    int marks;
    StudentID(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp
{
public:
    bool operator()(StudentID a,StudentID b)
    {
        if(a.marks==b.marks)
        {
            return a.roll>b.roll;
        }
        return a.marks<b.marks;
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<StudentID, vector<StudentID>,cmp>pq;
    while (n--)
    {
        string Name;
        int roll,marks;
        cin>>Name>>roll>>marks;
        pq.push(StudentID(Name,roll,marks));
    }
    int q;
    cin>>q;
    while (q--)
    {
        int h;
        cin>>h;
        if (h==1)
        {
            if (pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" " << pq.top().marks << endl;
            }
        }
        else if(h==2) 
        {
            if (pq.empty())
            {
                cout<<"Empty"<<endl;
            } 
            else
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name<<" "<<pq.top().roll<<" " <<pq.top().marks << endl;
                } 
                else 
                {
                    cout<<"Empty"<<endl;
                }
            }
        }
        else 
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            pq.push(StudentID(name,roll,marks));
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
    }
    return 0;
}