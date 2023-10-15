#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40,50,30,70,80,90,100};

    // mylist=list2;
    // mylist.assign(list2.begin(),list2.end());

    // list<int> newlist={100,200,300};
    // vector<int> v={30,40,50};
    // int a[3]={90,80,70};

    // mylist.push_back(110);

    // mylist.push_front(50);

    // mylist.pop_back();
    // mylist.pop_back();

    // mylist.pop_front();
    // mylist.pop_front();

    // mylist.insert(next(mylist.end(),2),1);
    // mylist.insert(next(mylist.begin(),8),{100,200,300});
    // mylist.insert(next(mylist.begin(),1),a,a+3);//index=0-n

    // mylist.erase(next(mylist.begin(),2));//index=0-n;
    // mylist.erase(next(mylist.end(),2));
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),8));//oi index theke jekuno position porjonto erase korte hole ekta index besi dite hobe coz eta ekta index ag obdi kaj kore;

    // replace(mylist.begin(),mylist.end(),30,100);

    auto it = find(mylist.begin(),mylist.end(),10);
    if(it == mylist.end())
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }
    return 0;
}