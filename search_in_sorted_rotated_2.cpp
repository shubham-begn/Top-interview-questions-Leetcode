#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        bool ans=false;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans=true;
                break;
            }
            else if(nums[low]==nums[mid] && nums[mid]==nums[high])
            {
                low++;
                high--;
            }
            else if(nums[mid]>=nums[low])
            {
                if(target>=nums[low] && nums[mid]>target)
                    high=mid-1;
                else low=mid+1;
            }
            else
            {
                if(target>nums[mid] && target<=nums[high])
                    low=mid+1;
                else high=mid-1;
            }
        }
        return ans;
    }

int main()
{
int n,x;
cin>>n>>x;

vector<int> nums;
int temp;
for(int i=0;i<n;i++)
{
    cin>>temp;
    nums.push_back(temp);
}

cout<<search(nums,x);

}