#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
    {
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }


string largestNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),cmp);
        string ans;
        
        for(int i=0;i<nums.size();i++)
        {
            ans+=to_string(nums[i]);
        }
        if(nums[0]==0)
            return "0";
        return ans;
    }

int main()
{
    int n;
    cin>>n;
    int temp;
    vector<int> nums;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        nums.push_back(temp);
    }

    cout<<largestNumber(nums);
}