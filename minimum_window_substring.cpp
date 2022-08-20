#include<bits/stdc++.h>
using namespace std;
string mini(string s,string t)
{
    int n=s.length(),m=t.length();
    unordered_map<char,int> mp;
    for(int i=0;i<m;i++)
    mp[t[i]]++;

    int st=0,len=INT_MAX;
    int i=0,j=0;
    int cnt=mp.size();

    for(i=0;i<n;i++)
    {
        mp[s[i]]--;
        if(mp[s[i]]==0) cnt--;

        if(cnt==0)
        {
            while(cnt==0)
            {   
                if(len>i-j+1)
                {
                st=j;
                len=min(len,i-j+1);
                }
                mp[s[j]]++;
                if(mp[s[j]]>0) cnt++;
                j++;

            }
        }
    }
    string ans;
    if(len!=INT_MAX)
    ans=s.substr(st,len);

    return ans;
   

}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    cout<<mini(s,t);
    return 0;
}