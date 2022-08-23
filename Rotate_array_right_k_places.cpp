#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<int>& nums, int k) {
        int temp=k;
        if(k>nums.size()) temp=k%nums.size();
        
        reverse(nums.begin(),nums.end()-temp);
        reverse(nums.begin()+nums.size()-temp,nums.end());
        reverse(nums.begin(),nums.end());
        
    }
int main()
{
    int n,k,temp;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++)
  {
    cin>>temp;
    nums.push_back(temp);
  }

    rotate(nums,k);

}