 int firstMissingPositive(vector<int>& nums) {
            bool one=false;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
          if(nums[i]==1) one=true;
            if(nums[i]>n || nums[i]<=0)
                nums[i]=1;
        }
        if(one==false) return 1;

        for(int i=0;i<n;i++)
        {
            nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
        }
        int ans=n+1;
        for(int i=0;i<n;i++)
        { // cout<<nums[i]<<" ";
            if(nums[i]>0)
            {
                ans=i+1;
                break;
            }
        }

        return ans;
    }
