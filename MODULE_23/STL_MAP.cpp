#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    // mp.insert({"jaber",67});
    // mp.insert({"ahmed",65});
    // mp.insert({"riyan",60});
    mp["jaber"]=56; 
    mp["ahmed"]=90; //o(logN)
    mp["riyan"]=67;

    cout<<mp["jaber"]<<endl;
    if(mp.count("jaber"))
    {
        cout<<"ase";
    }
    else cout<<"nai";
    // for(auto it=mp.begin();it != mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    //     o(logN)
    // }
}