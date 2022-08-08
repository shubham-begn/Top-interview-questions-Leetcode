#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int temp,ans=INT_MIN;
        while(left<right)
        {
            temp=(right-left)*min(height[left],height[right]);
            ans=max(ans,temp);
            
            if(height[left]<height[right])
                left++;
            
            else right--;
        }
        
        return ans;
    }

    int main()
   {
    int n,temp;
    cin>>n;
    vector<int > height;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        height.push_back(temp);
    }
    cout<<maxArea(height);
   }