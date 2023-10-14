// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int flag=0;
//     for (int i = 0; i < n; i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 flag=1;
//                 break;
//             }
//         }
//     }
//     if(flag==0) cout<<"NO";
//     else cout<<"YES";
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cnt[9]={0};
    for (int i = 0; i < n; i++)
    {
        int value=a[i];
        cnt[value]++;
    }
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if(cnt[i]>1) flag=1;
    }
    if(flag==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}