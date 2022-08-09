#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    int n=s.length();
        
    if(n%2!=0) return false;
        
    stack<char> st;
    char temp;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
              st.push(s[i]);
            
        else
          {   
            if(st.empty()) return false;

              temp=st.top();
              if((temp=='(' && s[i]==')')|| (temp=='[' && s[i]==']') || (temp=='{' && s[i]=='}'))
              {
                  st.pop();
              }
              else return false;
          }
    }
        
        if(st.empty()==true) return true;
        else return false;
    }

int main()
{
    string s;
    cin>>s;

    cout<<isValid(s);
}