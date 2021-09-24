#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-4,-1,0,3,7,10};
    int n=sizeof(a)/sizeof(a[0]);
    //Two pointer approach is used 
    //make a result array and store the values in it from n-1 position 
    //laregst number is choosed and put into the result array
    int l=0;  //two pointers left and right
    int r=n-1;
    int res[n]; //result array
    //now lets comapre the squared values and store the largest one in the result array
    int index=n-1;
    while(l<=r)  //loop will run till left pointer is less than equal to right pointer
    {
         int val1=a[l]*a[l];
       int val2=a[r]*a[r];
       if(val1>val2)
        {
          res[index]=val1;
          l++;
        }
        else
        {
        res[index]=val2;
        r--;
        }
        index--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
return 0;

}