#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        int temp=0;
        string ans;
        
        for(int j=0;j<strs[0].size();j++)
        {temp=0;
            for(int i=0;i<strs.size();i++)
            {
                if(strs[0][j]==strs[i][j])
                    temp++;
            }    
                if(temp==strs.size())
                    ans.push_back(strs[0][j]);
                
                else 
                {
                    
                    break;
                }
                
                
            }


        
        return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string> strs;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        strs.push_back(s);
    }

    cout<<longestCommonPrefix(strs);
}