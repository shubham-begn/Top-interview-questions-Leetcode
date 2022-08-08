#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;

    for(int i=0;i<n-1;i++)
    {   
        if(i>0 && nums[i]==nums[i-1]) continue;  //to eliminate 1st no of triplet's duplicate element
        
        int l=i+1;
        int r=n-1;
        int x=nums[i];

        while(l<r)
        {
            if(x+nums[l]+nums[r]==0)
            {
                vector<int > temp;
                temp.push_back(x);
                temp.push_back(nums[l]);
                temp.push_back(nums[r]);

                ans.push_back(temp);
                while(l<r && nums[l]==nums[l+1]) l++;//to remove duplicate  2nd no in triplet
                while(l<r && nums[r]==nums[r-1]) r--;//to remove duplicate 3rd no in triplet
                l++;
                r--;
            }
            else if(x+nums[l]+nums[r]<0)
            l++;

            else r--;
        }
        
    }
        
    return ans;
    }

int main()
{
    vector<int> nums;
    int temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        nums.push_back(temp);

    }

  

}