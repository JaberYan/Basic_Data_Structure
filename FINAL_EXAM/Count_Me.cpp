#include<bits/stdc++.h>
using namespace std;
pair<string,int>count(string s)
{
    stringstream ss(s);
    string word;
    map<string,int>wcnt;
    int mx_count=0;
    string mx_word=" ";
    while (ss>>word)
    {
        wcnt[word]++;
        if (wcnt[word]>mx_count)
        {
            mx_count=wcnt[word];
            mx_word=word;
        }
    }
    return make_pair(mx_word,mx_count);
}
int main()
{
    vector<string> v={"jaber"};
    cout<<v.size();
    // int test;
    // cin>>test;
    // cin.ignore();
    // for(int i=0;i<test;i++)
    // {
    //     string f;
    //     getline(cin,f);
    //     pair<string,int>result=count(f);
    //     cout<<result.first<<" "<<result.second<<endl;
    // }
    return 0;
}