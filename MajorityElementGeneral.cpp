#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int req = n/k;
   unordered_map<int,int> m;
   for(int i=0;i<n;i++)
   {
       m[a[i]]++;
   }
   for(auto u: m)
   {
       if(u.second>req)
       {
           cout<<u.first<<" ";
       }
   }
   cout<<endl;
   return 0;
}