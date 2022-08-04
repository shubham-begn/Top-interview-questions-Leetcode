#include<bits/stdc++.h>
using namespace std;
void abc(int a[],int n,int x)
{
    vector<int > ans;
    unordered_map<int,int> mp;

    mp.insert({a[0],0});

    for(int i=1;i<n;i++)
    {
        if(mp.find(x-a[i])!=mp.end())
        {
            ans.push_back(mp.at(x-a[i]));
            ans.push_back(i);
        }
        else
        {
            mp.insert({a[i],i});
        }
    }

    cout<<ans[0]<<" "<<ans[1];
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    abc(a,n,x);
}