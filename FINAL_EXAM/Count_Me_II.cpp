#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>FREQUENCY;
        int MXCOUNT=0,MXVALUE=INT_MIN;
        for (int i=0;i<n;i++)
        {
            FREQUENCY[v[i]]++;
            if (FREQUENCY[v[i]]>MXCOUNT||(FREQUENCY[v[i]]==MXCOUNT && v[i]>MXVALUE))
            {
                MXCOUNT=FREQUENCY[v[i]];
                MXVALUE=v[i];
            }
        }
        cout<<MXVALUE<<" "<<MXCOUNT<<endl;
    }
    return 0;
}