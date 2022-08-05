#include<bits/stdc++.h>
using namespace std;
double median(int a[],int b[],int n,int m)
{  int low=0,high=n;

   while(low<=high)
   {
   int i1=(low+high)/2;
   int i2=(n+m+1)/2 -i1;

   int min1=((i1==n)?INT_MAX:a[i1]);
   int min2=(i2==m)?INT_MAX:b[i2];

   int max1=(i1==0)?INT_MIN:a[i1-1];
   int max2=(i2==0)?INT_MIN:b[i2-1];

   if(min1>=max2 && min2>=max1)
   {
    if((n+m)%2==0)
    return double((max(max1,max2)+min(min1,min2))/2);
    else return max(max1,max2);

   }
  else if(max1>min2) high=i1-1;
        else low=i1+1;

   }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];

    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<m;i++)
    cin>>b[i];

    cout<<median(a,b,n,m);
}