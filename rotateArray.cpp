#include<bits/stdc++.h>
using namespace std;

 void reverse(vector<int>& nums,int low,int high)
    {
        while(low<high)
        {
           swap(nums[low],nums[high]);
               low++;
            high--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
        
    }
int main()
{
    vector<int> nums;
    nums.push_back(1);
     nums.push_back(2);
      nums.push_back(3);
       nums.push_back(4);
        nums.push_back(5);
         nums.push_back(6);
          nums.push_back(7);
rotate(nums,3);
for(auto& it:nums)
{
    cout<<it<<" ";
}
    return 0;
}